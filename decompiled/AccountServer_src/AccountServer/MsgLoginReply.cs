namespace AccountServer;

public class MsgLoginReply
{
	public const ushort cType = 1055;

	public ushort Size { get; set; }

	public ushort Type { get; set; }

	public int AccountId { get; set; }

	public int dwData { get; set; }

	public string IPAddress { get; set; }

	public uint Port { get; set; }

	public MsgLoginReply(int _Account, int _Key, string _IPAddress, uint _Port)
	{
		Size = 32;
		Type = 1055;
		AccountId = _Account;
		dwData = _Key;
		IPAddress = _IPAddress;
		Port = _Port;
	}

	public void ToBytes(Packet msg)
	{
		msg.InitWriter();
		msg.Write(AccountId);
		msg.Write(dwData);
		msg.Write(Port);
		msg.Write(0);
		msg.Write(IPAddress, 20);
		msg.Finalize(1055);
	}
}
