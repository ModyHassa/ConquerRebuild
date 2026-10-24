namespace AccountServer;

public class MsgLoginProof
{
	public const ushort cType = 1214;

	public ushort Size { get; set; }

	public ushort Type { get; set; }

	public byte[] A { get; set; }

	public byte[] M { get; set; }

	public MsgLoginProof()
	{
	}

	public MsgLoginProof(Packet msg)
	{
		msg.Seek(0);
		Size = msg.ReadUInt16();
		Type = msg.ReadUInt16();
		A = msg.ReadBytes(msg.ReadUInt8());
		msg.Seek(133);
		M = msg.ReadBytes(msg.ReadUInt8());
	}

	public void ToBytes(Packet msg)
	{
	}

	public void Process(AuthClient Client)
	{
	}
}
