namespace AccountServer;

public class PointCipher : ICipher
{
	private ushort InCounter;

	private ushort OutCounter;

	private byte[] cipherKey1 = new byte[256];

	private byte[] cipherKey2 = new byte[256];

	public PointCipher()
	{
		byte b = 126;
		byte b2 = 211;
		for (int i = 0; i < 256; i++)
		{
			cipherKey1[i] = b;
			cipherKey2[i] = b2;
			b = (byte)((b * 18 + 151) * b + 25);
			b2 = (byte)((b2 * 72 + 81) * b2 + 27);
		}
		InCounter = 0;
		OutCounter = 0;
	}

	public unsafe void Encrypt(byte* src, int srcOffset, byte[] dst, int dstOffset, int length)
	{
		fixed (byte* ptr = &dst[dstOffset])
		{
			for (int i = srcOffset; i < srcOffset + length; i++)
			{
				ptr[i] = (byte)(src[i] ^ 0xAB);
				ptr[i] = (byte)((ptr[i] >> 4) | (dst[i] << 4));
				byte* num = ptr + i;
				*num ^= cipherKey2[OutCounter >> 8];
				byte* num2 = ptr + i;
				*num2 ^= cipherKey1[OutCounter & 0xFF];
				OutCounter++;
			}
		}
	}

	public unsafe void Decrypt(byte[] src, int srcOffset, byte* dst, int dstOffset, int length)
	{
		fixed (byte* ptr = &src[srcOffset])
		{
			for (int i = dstOffset; i < dstOffset + length; i++)
			{
				dst[i] = (byte)(ptr[i] ^ 0xAB);
				dst[i] = (byte)((dst[i] << 4) | (dst[i] >> 4));
				byte* num = dst + i;
				*num ^= cipherKey2[InCounter >> 8];
				byte* num2 = dst + i;
				*num2 ^= cipherKey1[InCounter & 0xFF];
				InCounter++;
			}
		}
	}
}
