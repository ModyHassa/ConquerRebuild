namespace AccountServer;

public class MsgCryptCode
{
	public const ushort cType = 1059;

	public ushort Size { get; set; }

	public ushort Type { get; set; }

	public uint Seed { get; set; }

	public MsgCryptCode(uint seed)
	{
		Seed = seed;
	}

	public MsgCryptCode(Packet msg)
	{
		msg.Seek(0);
	}

	public void ToBytes(Packet msg)
	{
		msg.InitWriter();
		msg.Write(Seed);
		msg.Finalize(1059);
	}

	public void Process(AuthClient Client)
	{
	}
}
