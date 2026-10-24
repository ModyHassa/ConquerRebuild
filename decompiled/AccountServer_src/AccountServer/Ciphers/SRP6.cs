using System;
using System.Security.Cryptography;
using System.Text;

namespace AccountServer.Ciphers;

public class SRP6
{
	public class Sha1Hash
	{
		private SHA1 mSha;

		private static byte[] ZeroArray = new byte[0];

		public Sha1Hash()
		{
			mSha = SHA1.Create();
		}

		public void Update(byte[] Data)
		{
			mSha.TransformBlock(Data, 0, Data.Length, Data, 0);
		}

		public void Update(string s)
		{
			Update(Encoding.Default.GetBytes(s));
		}

		public void Update(int data)
		{
			Update(BitConverter.GetBytes(data));
		}

		public void Update(uint data)
		{
			Update(BitConverter.GetBytes(data));
		}

		public byte[] Final()
		{
			mSha.TransformFinalBlock(ZeroArray, 0, 0);
			return mSha.Hash;
		}

		public byte[] Final(byte[] Data)
		{
			mSha.TransformFinalBlock(Data, 0, Data.Length);
			return mSha.Hash;
		}
	}

	private static BigInt N = BigInt.FromHexString("894B645E89E1535BBDAD5B8B290650530801B18EBFBF5E8FAB3C82872A3E9BB7");

	private static BigInt g = BigInt.FromHexString("07");

	private static BigInt k = BigInt.FromHexString("03");

	private static BigInt s = BigInt.FromMemoryBytes(new byte[32]
	{
		55, 177, 232, 60, 185, 177, 108, 135, 223, 198,
		105, 1, 32, 225, 72, 11, 238, 206, 217, 24,
		121, 51, 91, 33, 112, 57, 65, 36, 111, 144,
		3, 236
	});

	private static BigInt b = BigInt.FromMemoryHS("C34E8464C532C1CE798580792B42D8DAB39E1FF9D4CC2820673DCBF9B9F4179E");

	private BigInt x;

	private BigInt v;

	private BigInt B;

	private BigInt I;

	public static BigInt H_BigInt(params object[] numbers)
	{
		byte[] final = H(numbers);
		return BigInt.FromMemoryBytes(final);
	}

	public static byte[] H(params object[] numbers)
	{
		Sha1Hash sha1Hash = new Sha1Hash();
		for (int i = 0; i < numbers.Length; i++)
		{
			if (numbers[i] is BigInt)
			{
				sha1Hash.Update((numbers[i] as BigInt).GetBytes());
			}
			else if (numbers[i] is byte[])
			{
				sha1Hash.Update(numbers[i] as byte[]);
			}
		}
		return sha1Hash.Final();
	}

	public static byte[] HMD5(byte[] input)
	{
		MD5 mD = MD5.Create();
		return mD.ComputeHash(input);
	}

	private static BigInt Compute_p(string plainPassword)
	{
		byte[] array = new byte[15]
		{
			163, 172, 161, 163, 102, 100, 106, 102, 44, 106,
			107, 103, 102, 107, 108
		};
		byte[] array2 = new byte[plainPassword.Length + array.Length];
		Encoding.ASCII.GetBytes(plainPassword).CopyTo(array2, 0);
		array.CopyTo(array2, plainPassword.Length);
		byte[] array3 = HMD5(array2);
		StringBuilder stringBuilder = new StringBuilder();
		stringBuilder.Append("00000000");
		byte[] array4 = array3;
		foreach (byte b in array4)
		{
			stringBuilder.Append(b.ToString("X2"));
		}
		return BigInt.FromMemoryHS(stringBuilder.ToString());
	}

	private static BigInt GetB(BigInt v)
	{
		BigInt bigInt = k.Duplicate();
		bigInt.Multiply(v);
		BigInt bigInt2 = g.Duplicate();
		bigInt2.ModPow(b, N);
		bigInt.Add(bigInt2);
		return bigInt;
	}

	private static BigInt GetS(BigInt A, BigInt v, BigInt u)
	{
		BigInt bigInt = v.Duplicate();
		bigInt.ModPow(u, N);
		bigInt.Multiply(A);
		bigInt.ModPow(b, N);
		return bigInt;
	}

	public static BigInt ShaInterleave(BigInt S)
	{
		byte[] bytes = S.GetBytes();
		int num = bytes.Length / 2;
		byte[] array = new byte[num];
		for (int i = 0; i < num; i++)
		{
			array[i] = bytes[i * 2];
		}
		Sha1Hash sha1Hash = new Sha1Hash();
		byte[] array2 = sha1Hash.Final(array);
		byte[] array3 = new byte[40];
		for (int j = 0; j < 20; j++)
		{
			array3[j * 2] = array2[j];
		}
		for (int k = 0; k < num; k++)
		{
			array[k] = bytes[k * 2 + 1];
		}
		sha1Hash = new Sha1Hash();
		array2 = sha1Hash.Final(array);
		for (int l = 0; l < 20; l++)
		{
			array3[l * 2 + 1] = array2[l];
		}
		byte[] final = array3;
		return BigInt.FromMemoryBytes(final);
	}

	private static byte[] XorNgHashes()
	{
		byte[] array = H(N);
		byte[] array2 = H(g);
		for (int i = 0; i < 20; i++)
		{
			array[i] ^= array2[i];
		}
		return array;
	}

	public SRP6(string username, string password)
	{
		BigInt bigInt = Compute_p(password);
		x = H_BigInt(s, bigInt);
		v = g.Duplicate();
		v.ModPow(x, N);
		I = BigInt.FromMemoryBytes(Encoding.Default.GetBytes(username + ((username.Length % 2 == 0) ? "" : "\0")));
		B = GetB(v);
	}

	public void Dispose()
	{
	}

	public bool Challenge(byte[] _A, byte[] _M)
	{
		BigInt bigInt = BigInt.FromMemoryBytes(_A);
		BigInt u = H_BigInt(bigInt, B);
		BigInt bigInt2 = GetS(bigInt, v, u);
		BigInt bigInt3 = ShaInterleave(bigInt2);
		bool result = true;
		byte[] array = H(XorNgHashes(), H(I), s, bigInt, B, bigInt3);
		if (array.Length != _M.Length)
		{
			result = false;
		}
		else
		{
			for (int i = 0; i < array.Length; i++)
			{
				if (array[i] != _M[i])
				{
					result = false;
					break;
				}
			}
		}
		return result;
	}

	public void GetOutgoingFields(out byte[] _B, out byte[] _s)
	{
		_B = B.GetBytes();
		_s = s.GetBytes();
	}
}
