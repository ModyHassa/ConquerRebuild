using System;
using System.Collections.Concurrent;

namespace AccountServer;

public class PointServer
{
	private static ServerSocket<PointClient, PointCipher> PointSocket;

	private static ulong Heartbeat;

	private static int HeartbeatCount;

	public static ConcurrentDictionary<int, PointClient> Users;

	public PointServer(ushort ListenPort)
	{
		Users = new ConcurrentDictionary<int, PointClient>();
		World.Factory.AddProcess(ProcessPointReceive);
		World.Factory.AddProcess(ProcessPointSend);
		World.Factory.AddProcess(ProcessHeartbeat);
		PointSocket = new ServerSocket<PointClient, PointCipher>(ListenPort);
		PointSocket.OnConnect = PointConnect;
		PointSocket.OnDisconnect = PointDisconnect;
		PointSocket.Start(100);
	}

	public void PointConnect(ClientObject<PointClient, PointCipher> client)
	{
		client.Wrapper = new PointClient(client);
		Users.TryAdd(client.Wrapper.PointId, client.Wrapper);
		client.Receive();
	}

	public void PointDisconnect(ClientObject<PointClient, PointCipher> client)
	{
		if (World.Servers.TryRemove(client.Wrapper.Server.GenerateHash(), out GameServer value))
		{
			World.DebugWriteLine("{0} Disconnected", value.ServerName);
			World.FormInstance.SetServerCount();
		}
		Users.TryRemove(client.Wrapper.PointId, out client.Wrapper);
	}

	public void ProcessPointReceive()
	{
		foreach (PointClient value2 in Users.Values)
		{
			if (!value2.Network.NextReceiveCandidate(out Packet next))
			{
				continue;
			}
			try
			{
				if (World.Servers.TryGetValue(value2.Server.GenerateHash(), out GameServer value))
				{
					value.Heartbeat = TimeStamp.GetTime();
					value.LastHeartbeat = 0uL;
				}
				ushort num = next.ReadUInt16();
				World.ExtensiveLog("Incoming Point Packet Size: {0} Type: {1} | IP: {2}", next.Size, num, value2.Network.RemoteIP());
				switch (num)
				{
				case 1099:
				{
					MsgServer msgServer = new MsgServer(next);
					msgServer.Process(value2);
					break;
				}
				case 1002:
				{
					MsgLogin msgLogin = new MsgLogin(next);
					msgLogin.Process(value2);
					break;
				}
				case 1200:
				{
					MsgFee msgFee = new MsgFee(next);
					msgFee.Process(value2);
					break;
				}
				case 1201:
				{
					MsgQueryFee msgQueryFee = new MsgQueryFee(next);
					msgQueryFee.Process(value2);
					break;
				}
				default:
					World.DebugWriteLine(next.Dump("Unknown PointServer Packet"));
					break;
				}
			}
			catch (Exception ex)
			{
				World.DebugLog(ex.ToString());
			}
			finally
			{
				PacketRecycle.Reuse(next);
			}
		}
	}

	public void ProcessPointSend()
	{
		foreach (PointClient value in Users.Values)
		{
			if (value.Network.NextSendCandidate(out byte[] next))
			{
				value.Network.DirectSend(next);
			}
		}
	}

	public void ProcessHeartbeat()
	{
		ulong num = TimeStamp.GetUnixTime64(0L) - Heartbeat;
		if (TimeStamp.GetUnixTime64(0L) - Heartbeat <= 1)
		{
			return;
		}
		if (++HeartbeatCount >= 17280)
		{
			foreach (PointClient value2 in Users.Values)
			{
				if (!World.Servers.TryGetValue(value2.Server.GenerateHash(), out GameServer value))
				{
					continue;
				}
				if ((value.State == ServerState.Busy || value.State == ServerState.Full) && TimeStamp.GetTime() > value.Delay)
				{
					value.SetState(ServerState.Normal);
				}
				ulong num2 = TimeStamp.GetUnixTime64(0L) - value.LastHeartbeat;
				ulong num3 = TimeStamp.GetUnixTime64(0L) - value.Heartbeat;
				if (value.LastHeartbeat != 0L && TimeStamp.GetUnixTime64(0L) - value.LastHeartbeat > 86400)
				{
					World.ExtensiveLog("Heartbeat Timeout #1!");
					World.DebugWriteLine("Heartbeat Timeout #1!");
				}
				else
				{
					if (TimeStamp.GetUnixTime64(0L) - value.Heartbeat <= 86400 || TimeStamp.GetUnixTime64(0L) - value.LastHeartbeat <= 86400)
					{
						continue;
					}
					MsgFee msgFee = new MsgFee(666666, MsgFeeType.HEARTBEAT);
					using (RecycledPacket recycledPacket = new RecycledPacket())
					{
						Packet stream = recycledPacket.GetStream();
						msgFee.ToBytes(stream);
						if (value2.Network.BlockSend(stream))
						{
							World.ExtensiveLog("Heartbeat Sent!");
							World.DebugWriteLine("Heartbeat Sent!");
						}
						else
						{
							World.ExtensiveLog("Heartbeat Timeout #2!");
							World.DebugWriteLine("Heartbeat Timeout #2!");
						}
					}
					value.LastHeartbeat = TimeStamp.GetUnixTime64(0L);
				}
			}
			HeartbeatCount = 0;
		}
		Heartbeat = TimeStamp.GetUnixTime64(0L);
	}
}
