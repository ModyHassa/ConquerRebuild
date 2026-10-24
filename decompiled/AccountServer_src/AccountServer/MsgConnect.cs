namespace AccountServer;

public class MsgConnect
{
	public const ushort cType = 1052;

	public ushort Size { get; set; }

	public ushort Type { get; set; }

	public int AccountId { get; set; }

	public int dwData { get; set; }

	public string Info { get; set; }

	public MsgConnect(int _AccountId, int _dwData, string szInfo)
	{
		AccountId = _AccountId;
		dwData = _dwData;
		Info = szInfo;
	}

	public MsgConnect(Packet msg)
	{
		msg.Seek(0);
		Size = msg.ReadUInt16();
		Type = msg.ReadUInt16();
		AccountId = msg.ReadInt32();
		dwData = msg.ReadInt32();
		Info = msg.ReadCString(16);
	}

	public void ToBytes(Packet msg)
	{
		msg.InitWriter();
		msg.Write(AccountId);
		msg.Write(dwData);
		msg.Write(Info, 16);
		msg.Finalize(1052);
	}

	public void Process(AuthClient Client)
	{
	}
}
