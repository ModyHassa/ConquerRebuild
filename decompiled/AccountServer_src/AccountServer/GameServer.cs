using System.Collections.Concurrent;
using System.Collections.Generic;

namespace AccountServer;

public class GameServer
{
	public string Username;

	public string Password;

	public string ServerName;

	public string IPAddress;

	public uint Port;

	public uint Identifier;

	public ulong LastHeartbeat;

	public ulong Heartbeat;

	public uint Delay;

	public ServerState State;

	public ConcurrentDictionary<int, OnlineAccount> OnlineAccounts { get; set; }

	public PointClient Connection { get; set; }

	public GameServer(PointClient _Connection)
	{
		Connection = _Connection;
		Username = Connection.Username;
		Password = Connection.Password;
		ServerName = Connection.Server;
		IPAddress = Connection.Network.RemoteIP();
		Port = Connection.Port;
		Identifier = ServerName.GenerateHash();
		Heartbeat = TimeStamp.GetTime();
		OnlineAccounts = new ConcurrentDictionary<int, OnlineAccount>();
		SetState(ServerState.Offline);
	}

	public void ClearState()
	{
		State = ServerState.Offline;
	}

	public void SetState(ServerState NewState)
	{
		State = NewState;
		switch (NewState)
		{
		case ServerState.Busy:
		case ServerState.Full:
			Delay = TimeStamp.GetTime() + 30000;
			World.DebugWriteLine("{0} State = {1}", ServerName, State);
			break;
		case ServerState.Normal:
			World.DebugWriteLine("{0} State = {1}", ServerName, State);
			break;
		}
	}

	public void Kickout(int AccountId)
	{
		MsgFee msgFee = new MsgFee(AccountId, MsgFeeType.FEE_KICKOUT);
		using (RecycledPacket recycledPacket = new RecycledPacket())
		{
			Packet stream = recycledPacket.GetStream();
			msgFee.ToBytes(stream);
			Connection.Network.BlockSend(stream);
		}
		OnlineAccounts.TryRemove(AccountId, out OnlineAccount _);
	}

	public int ClientsByIP(string IPAddress)
	{
		int num = 0;
		foreach (KeyValuePair<int, OnlineAccount> onlineAccount in OnlineAccounts)
		{
			if (onlineAccount.Value.RemoteIP.Equals(IPAddress))
			{
				num++;
			}
		}
		return num;
	}
}
