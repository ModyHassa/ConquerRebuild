namespace AccountServer;

public class MsgAccount2
{
	public const ushort cType = 1086;

	public ushort Size { get; private set; }

	public ushort Type { get; private set; }

	public string Account { get; private set; }

	public string Password { get; private set; }

	public string ServerName { get; private set; }

	private byte[] PassBytes { get; set; }

	public MsgAccount2(Packet msg)
	{
		msg.Seek(0);
		Size = msg.ReadUInt16();
		Type = msg.ReadUInt16();
		Account = msg.ReadCString(16);
		msg.SeekForward(112);
		PassBytes = msg.ReadBytes(16);
		Password = PasswordCipher.Decrypt(PassBytes);
		msg.SeekForward(112);
		ServerName = msg.ReadCString(16);
	}
}
