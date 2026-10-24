using System;
using System.Text;

namespace AccountServer;

public class PasswordCipher
{
	private const int RC5_32 = 32;

	private const int RC5_12 = 12;

	private const int RC5_SUB = 26;

	private const int RC5_16 = 16;

	private const int RC5_KEY = 4;

	private const uint RC5_PW32 = 3084996963u;

	private const uint RC5_QW32 = 2654435769u;

	private static readonly uint[] _bufKey;

	private static readonly uint[] _bufSub;

	static PasswordCipher()
	{
		_bufKey = new uint[4] { 3909016636u, 2127975620u, 452503062u, 3191394536u };
		_bufSub = new uint[26];
		_bufSub[0] = 3084996963u;
		for (int i = 1; i < 26; i++)
		{
			_bufSub[i] = _bufSub[i - 1] + 2654435769u;
		}
		int num = 0;
		int num2 = 0;
		uint num3 = 0u;
		uint num4 = 0u;
		for (int j = 0; j < 3 * Math.Max(4, 26); j++)
		{
			num3 = (_bufSub[num] = RotateLeft(_bufSub[num] + num3 + num4, 3));
			num = (num + 1) % 26;
			num4 = (_bufKey[num2] = RotateLeft(_bufKey[num2] + num3 + num4, (int)(num3 + num4)));
			num2 = (num2 + 1) % 4;
		}
	}

	public unsafe static byte[] Encrypt(string password)
	{
		byte[] bytes = Encoding.ASCII.GetBytes(password);
		fixed (byte* ptr = bytes)
		{
			uint* ptr2 = (uint*)ptr;
			for (int i = 0; i < bytes.Length / 8; i++)
			{
				uint num = ptr2[i * 2] + _bufSub[0];
				uint num2 = ptr2[i * 2 + 1] + _bufSub[1];
				for (int num3 = 12; num3 >= 1; num3--)
				{
					num = RotateLeft(num ^ num2, (int)num2) + _bufSub[num3 * 2];
					num2 = RotateLeft(num2 ^ num, (int)num) + _bufSub[num3 * 2 + 1];
				}
				ptr2[i * 2] = num;
				ptr2[i * 2 + 1] = num2;
			}
			return bytes;
		}
	}

	public unsafe static string Decrypt(byte[] passwordBytes)
	{
		fixed (byte* ptr = passwordBytes)
		{
			uint* ptr2 = (uint*)ptr;
			for (int i = 0; i < passwordBytes.Length / 8; i++)
			{
				uint num = ptr2[2 * i];
				uint num2 = ptr2[2 * i + 1];
				for (int num3 = 12; num3 >= 1; num3--)
				{
					num2 = RotateRight(num2 - _bufSub[2 * num3 + 1], (int)num) ^ num;
					num = RotateRight(num - _bufSub[2 * num3], (int)num2) ^ num2;
				}
				ptr2[2 * i] = num - _bufSub[0];
				ptr2[2 * i + 1] = num2 - _bufSub[1];
			}
			return new string((sbyte*)ptr2);
		}
	}

	private static uint RotateLeft(uint value, int bits)
	{
		bits %= 32;
		return (value << bits) | (value >> 32 - bits);
	}

	private static uint RotateRight(uint value, int bits)
	{
		bits %= 32;
		return (value >> bits) | (value << 32 - bits);
	}
}
