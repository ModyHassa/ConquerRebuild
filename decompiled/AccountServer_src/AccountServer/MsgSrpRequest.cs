namespace AccountServer;

public class MsgSrpRequest
{
	public const ushort cType = 1542;

	public ushort Size { get; set; }

	public ushort Type { get; set; }

	public string Username { get; set; }

	public string ServerName { get; set; }

	public MsgSrpRequest()
	{
	}

	public MsgSrpRequest(Packet msg)
	{
		msg.Seek(0);
		Size = msg.ReadUInt16();
		Type = msg.ReadUInt16();
		msg.Seek(8);
		Username = msg.ReadCString(128);
		ServerName = msg.ReadCString(16);
	}

	public void ToBytes(Packet msg)
	{
	}

	public void Process(AuthClient Client)
	{
	}
}
