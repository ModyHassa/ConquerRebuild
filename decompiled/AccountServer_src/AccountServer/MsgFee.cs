namespace AccountServer;

public class MsgFee
{
	public const ushort cType = 1200;

	public ushort Size { get; private set; }

	public ushort Type { get; private set; }

	public int AccountId { get; private set; }

	public MsgFeeType SubType { get; private set; }

	public MsgFee(Packet msg)
	{
		msg.Seek(0);
		Size = msg.ReadUInt16();
		Type = msg.ReadUInt16();
		AccountId = msg.ReadInt32();
		SubType = (MsgFeeType)msg.ReadUInt8();
	}

	public MsgFee(int _AccountId, MsgFeeType _MsgFeeType)
	{
		Size = 32;
		Type = 1200;
		AccountId = _AccountId;
		SubType = _MsgFeeType;
	}

	public void ToBytes(Packet msg)
	{
		msg.InitWriter();
		msg.Write(AccountId);
		msg.Write((uint)SubType);
		msg.Finalize(1200);
	}

	public void Process(PointClient Client)
	{
		switch (SubType)
		{
		case MsgFeeType.FEE_BEGIN:
		{
			if (World.Servers.TryGetValue(Client.Server.GenerateHash(), out GameServer value2))
			{
				PlayerOnlineHandler.Instance.SetPlayerOnline(AccountId);
				Database.ExecuteSql($"UPDATE `accounts` SET online_us = 1 WHERE id = '{AccountId}'", Database.AuthConnectionString);
				World.FormInstance.WriteLine("SESSION: Account ID {0} has entered the world on {1}.", AccountId, value2.ServerName);
			}
			World.FormInstance.SetPlayerCount();
			World.FormInstance.RefreshOnlinePlayers();
			break;
		}
		case MsgFeeType.FEE_POINT:
		case MsgFeeType.HEARTBEAT:
		case MsgFeeType.FEE_TICK:
			break;
		case MsgFeeType.FEE_END:
		case MsgFeeType.FEE_KICKOUT:
		case MsgFeeType.FEE_OFFLINE:
		{
			if (World.Servers.TryGetValue(Client.Server.GenerateHash(), out GameServer value3))
			{
				if (value3.OnlineAccounts.TryRemove(AccountId, out OnlineAccount value4))
				{
					World.FormInstance.WriteLine("SESSION: Character '{0}' (ID: {1}) has logged out.", value4.Username, AccountId);
				}
				Database.ExecuteSql($"UPDATE `accounts` SET online_us = 0 WHERE id = '{AccountId}'", Database.AuthConnectionString);
				PlayerOnlineHandler.Instance.SetPlayerOffline(AccountId);
			}
			World.FormInstance.SetPlayerCount();
			World.FormInstance.RefreshOnlinePlayers();
			break;
		}
		case MsgFeeType.SERVER_CLOSE:
		{
			if (World.Servers.TryGetValue(Client.Server.GenerateHash(), out GameServer value))
			{
				World.FormInstance.WriteLine("SYSTEM: {0} has disconnected. Cleaning sessions...", value.ServerName);
				Database.ExecuteSql("UPDATE `accounts` SET online_us = 0", Database.AuthConnectionString);
			}
			World.Servers.TryRemove(Client.Server.GenerateHash(), out value);
			World.FormInstance.SetServerCount();
			World.FormInstance.SetPlayerCount();
			World.FormInstance.RefreshOnlinePlayers();
			break;
		}
		case MsgFeeType.SERVER_BUSY:
		case MsgFeeType.SERVER_FULL:
			break;
		}
	}
}
