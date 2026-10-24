namespace AccountServer;

public interface ICipher
{
	unsafe void Encrypt(byte* src, int srcOffset, byte[] dst, int dstOffset, int length);

	unsafe void Decrypt(byte[] src, int srcOffset, byte* dst, int dstOffset, int length);
}
