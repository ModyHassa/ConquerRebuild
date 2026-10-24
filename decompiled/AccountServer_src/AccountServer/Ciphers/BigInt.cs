using System;
using System.Globalization;
using System.Linq;
using System.Text;
using Mono.Math;

namespace AccountServer.Ciphers;

public class BigInt
{
	public BigInteger Bn { get; set; }

	public BigInt()
	{
		Bn = new BigInteger();
	}

	public BigInt(BigInteger bn)
	{
		Bn = bn;
	}

	public static byte[] StringToByteArray(string hex)
	{
		return (from x in Enumerable.Range(0, hex.Length)
			where x % 2 == 0
			select Convert.ToByte(hex.Substring(x, 2), 16)).ToArray();
	}

	public static BigInt FromHexString(string str)
	{
		return new BigInt(new BigInteger(StringToByteArray(str)));
	}

	public static BigInt FromMemoryHS(string str)
	{
		string text = "";
		while (str.Length > 0)
		{
			text += str.Substring(str.Length - 2, 2);
			str = str.Substring(0, str.Length - 2);
		}
		return FromHexString(text);
	}

	public static string ByteArrayToString(byte[] ba)
	{
		StringBuilder stringBuilder = new StringBuilder(ba.Length * 2);
		foreach (byte b in ba)
		{
			stringBuilder.AppendFormat("{0:x2}", b);
		}
		return stringBuilder.ToString();
	}

	public override string ToString()
	{
		return ByteArrayToString(Bn.GetBytes());
	}

	public void Subtract(BigInt n)
	{
		Bn = BigInteger.Subtract(Bn, n.Bn);
	}

	public void Add(BigInt n)
	{
		Bn = BigInteger.Add(Bn, n.Bn);
	}

	public void Multiply(BigInt n)
	{
		Bn = BigInteger.Multiply(Bn, n.Bn);
	}

	public void ModPow(BigInt exp, BigInt N)
	{
		Bn = Bn.ModPow(exp.Bn, N.Bn);
	}

	public BigInt Duplicate()
	{
		return new BigInt(Bn);
	}

	public byte[] GetBytes()
	{
		string text = ToString();
		if (text.StartsWith("-"))
		{
			text = text.Remove(0, 1);
		}
		if ((text.Length & 1) == 1)
		{
			text = "0" + text;
		}
		byte[] array = new byte[text.Length / 2];
		int num = 0;
		while (text.Length > 0)
		{
			array[num++] = byte.Parse(text.Substring(0, 2), NumberStyles.HexNumber);
			text = text.Remove(0, 2);
		}
		Array.Reverse(array);
		return array;
	}

	public static BigInt FromMemoryBytes(byte[] final)
	{
		StringBuilder stringBuilder = new StringBuilder();
		foreach (byte b in final)
		{
			stringBuilder.Append(b.ToString("X2"));
		}
		return FromMemoryHS(stringBuilder.ToString());
	}
}
