namespace AccountServer;

public class MsgLogin
{
	public const ushort cType = 1002;

	public ushort Size { get; private set; }

	public ushort Type { get; private set; }

	public uint AccountId { get; private set; }

	public uint CheckData { get; private set; }

	public string Name { get; private set; }

	public ushort Version { get; private set; }

	public MsgLogin(Packet msg)
	{
		msg.Seek(0);
		Size = msg.ReadUInt16();
		Type = msg.ReadUInt16();
		AccountId = msg.ReadUInt32();
		CheckData = msg.ReadUInt32();
		Version = msg.ReadUInt16();
		Name = msg.ReadCString(16);
	}

	public MsgLogin(uint _AccountId, uint _CheckData, ushort _Version, string _szName)
	{
		Size = 32;
		Type = 1002;
		AccountId = _AccountId;
		CheckData = _CheckData;
		Version = _Version;
		Name = _szName;
	}

	public void ToBytes(Packet msg)
	{
		msg.InitWriter();
		msg.Write(AccountId);
		msg.Write(CheckData);
		msg.Write(Version);
		msg.Write(Name, 18);
		msg.Finalize(1002);
	}

	public void Process(PointClient Client)
	{
		if (World.Servers.TryGetValue(Client.Server.GenerateHash(), out GameServer value))
		{
			value.SetState(ServerState.Normal);
			if (World.FormInstance != null)
			{
				World.FormInstance.SetServerCount();
				World.FormInstance.WriteLine("Game Server '{0}' has connected successfully.", Client.Server);
			}
		}
	}
}
