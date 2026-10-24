namespace AccountServer;

public class MsgServer
{
	public const ushort cType = 1099;

	public ushort Size { get; private set; }

	public ushort Type { get; private set; }

	public string DatabaseUser { get; private set; }

	public string DatabasePassword { get; private set; }

	public string ServerName { get; private set; }

	public uint ServerPort { get; private set; }

	public MsgServer(Packet msg)
	{
		msg.Seek(0);
		Size = msg.ReadUInt16();
		Type = msg.ReadUInt16();
		DatabaseUser = msg.ReadCString(16);
		DatabasePassword = msg.ReadCString(16);
		ServerName = msg.ReadCString(16);
		ServerPort = msg.ReadUInt32();
	}

	public void Process(PointClient Client)
	{
		Client.Username = DatabaseUser;
		Client.Password = DatabasePassword;
		Client.Server = ServerName;
		Client.IPAddress = Client.Network.RemoteIP();
		Client.Port = ServerPort;
		GameServer gameServer = new GameServer(Client);
		if (!World.Servers.TryAdd(gameServer.Identifier, gameServer))
		{
			Client.Network.Kick("Server Already Registered!");
			return;
		}
		MsgLogin msgLogin = new MsgLogin(gameServer.Identifier, 0u, 49683, ServerName);
		using (RecycledPacket recycledPacket = new RecycledPacket())
		{
			Packet stream = recycledPacket.GetStream();
			msgLogin.ToBytes(stream);
			Client.Network.Send(stream);
		}
		World.FormInstance.SetServerCount();
		World.FormInstance.SetPlayerCount();
	}
}
