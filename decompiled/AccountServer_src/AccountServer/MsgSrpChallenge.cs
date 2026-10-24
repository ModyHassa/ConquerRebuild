namespace AccountServer;

public class MsgSrpChallenge
{
	public const ushort cType = 1213;

	public ushort Size { get; set; }

	public ushort Type { get; set; }

	public byte[] B { get; set; }

	public byte[] S { get; set; }

	public MsgSrpChallenge(byte[] b, byte[] s)
	{
		B = b;
		S = s;
	}

	public MsgSrpChallenge(Packet msg)
	{
		msg.Seek(0);
		Size = msg.ReadUInt16();
		Type = msg.ReadUInt16();
	}

	public void ToBytes(Packet msg)
	{
		msg.InitWriter();
		msg.Write((byte)B.Length);
		msg.Write(B);
		msg.Seek(391);
		msg.Write((byte)S.Length);
		msg.Write(S);
		msg.Finalize(1213);
	}

	public void Process(AuthClient Client)
	{
	}
}
