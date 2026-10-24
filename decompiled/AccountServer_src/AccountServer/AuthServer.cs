using System;
using System.Collections.Concurrent;
using AccountServer.Ciphers;
using MySql.Data.MySqlClient;

namespace AccountServer;

public class AuthServer
{
	private static ServerSocket<AuthClient, AuthCipher> AuthSocket;

	private static ConcurrentDictionary<int, AuthClient> Users;

	public AuthServer(ushort ListenPort)
	{
		Users = new ConcurrentDictionary<int, AuthClient>();
		World.Factory.AddProcess(ProcessAuthReceive);
		World.Factory.AddProcess(ProcessAuthSend);
		AuthSocket = new ServerSocket<AuthClient, AuthCipher>(ListenPort);
		AuthSocket.OnConnect = AuthConnect;
		AuthSocket.OnDisconnect = AuthDisconnect;
		AuthSocket.Start(100);
	}

	public void AuthConnect(ClientObject<AuthClient, AuthCipher> client)
	{
		client.Wrapper = new AuthClient(client);
		Users.TryAdd(client.Wrapper.AuthId, client.Wrapper);
		using (RecycledPacket recycledPacket = new RecycledPacket())
		{
			Packet stream = recycledPacket.GetStream();
			MsgCryptCode msgCryptCode = new MsgCryptCode(123456u);
			msgCryptCode.ToBytes(stream);
			client.Send(stream);
		}
		client.Receive();
	}

	public void AuthDisconnect(ClientObject<AuthClient, AuthCipher> client)
	{
		if (client.Wrapper != null && client.Wrapper.AccountId != 0)
		{
			string query = $"UPDATE `accounts` SET online_us = 0 WHERE id = '{client.Wrapper.AccountId}'";
			Database.ExecuteSql(query, Database.AuthConnectionString);
			Users.TryRemove(client.Wrapper.AuthId, out AuthClient _);
		}
	}

	private bool ValidateLoginRules(AuthClient client)
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString);
			mySqlConnection.Open();
			using MySqlCommand mySqlCommand = new MySqlCommand("SELECT type FROM accounts WHERE name=@name", mySqlConnection);
			mySqlCommand.Parameters.AddWithValue("@name", client.Username);
			object obj = mySqlCommand.ExecuteScalar();
			if (obj != null)
			{
				client.AccountType = Convert.ToInt32(obj);
			}
		}
		catch
		{
		}
		if (World.GMOnly && client.AccountType < 3)
		{
			Database.LoginReply(client, 0, 20, "", 0u);
			World.FormInstance?.WriteLine("LOGIN REJECTED: {0} tried to connect during GM-Only mode.", client.Username);
			return false;
		}
		bool flag = false;
		if (!string.IsNullOrEmpty(client.Server) && World.Servers.TryGetValue(client.Server.GenerateHash(), out GameServer _))
		{
			flag = true;
		}
		if (!flag)
		{
			if (client.AccountType < 3)
			{
				Database.LoginReply(client, 0, 11, "", 0u);
				World.FormInstance?.WriteLine("LOGIN REJECTED: {0} tried to connect but server '{1}' is offline.", client.Username, client.Server);
				return false;
			}
			World.FormInstance?.WriteLine("STAFF BYPASS: {0} logging into offline/busy server '{1}'.", client.Username, client.Server);
		}
		return true;
	}

	public void ProcessAuthReceive()
	{
		foreach (AuthClient value in Users.Values)
		{
			if (!value.Network.NextReceiveCandidate(out Packet next))
			{
				continue;
			}
			ushort num = 0;
			try
			{
				num = next.ReadUInt16();
				World.ExtensiveLog("Incoming Auth Packet Size: {0} Type: {1} | IP: {2}: ", next.Size, num, value.Network.RemoteIP());
				switch (num)
				{
				case 1214:
				{
					MsgLoginProof msgLoginProof = new MsgLoginProof(next);
					if (!(value.Network.RemoteIP() == "127.0.000.001"))
					{
						if (!value.Srp.Challenge(msgLoginProof.A, msgLoginProof.M))
						{
							Database.LoginReply(value, 0, 1, "", 0u);
							return;
						}
					}
					else
					{
						value.Password = Database.GetPassword(value.Username);
					}
					if (!ValidateLoginRules(value))
					{
						return;
					}
					Database.AttemptLogin(value);
					break;
				}
				case 1542:
				{
					if (!BruteForce.Instance.Attempt(value))
					{
						PacketRecycle.Reuse(next);
						break;
					}
					MsgSrpRequest msgSrpRequest = new MsgSrpRequest(next);
					if (!string.IsNullOrEmpty(msgSrpRequest.Username) && !string.IsNullOrEmpty(msgSrpRequest.ServerName))
					{
						value.Server = msgSrpRequest.ServerName;
						value.Username = msgSrpRequest.Username;
						string password = Database.GetPassword(value.Username);
						if (string.IsNullOrEmpty(password))
						{
							value.Network.Kick("Account not found");
							return;
						}
						value.Password = password;
						value.Srp = new SRP6(value.Username, value.Password);
						value.Srp.GetOutgoingFields(out byte[] _B, out byte[] _s);
						using RecycledPacket recycledPacket = new RecycledPacket();
						Packet stream = recycledPacket.GetStream();
						MsgSrpChallenge msgSrpChallenge = new MsgSrpChallenge(_B, _s);
						msgSrpChallenge.ToBytes(stream);
						value.Network.Send(stream);
					}
					break;
				}
				case 1051:
				{
					MsgAccount msgAccount2 = new MsgAccount(next);
					value.Username = msgAccount2.Account;
					value.Password = msgAccount2.Password;
					value.Server = msgAccount2.ServerName;
					if (!ValidateLoginRules(value))
					{
						return;
					}
					Database.AttemptLogin(value);
					break;
				}
				case 1086:
				{
					MsgAccount2 msgAccount = new MsgAccount2(next);
					value.Username = msgAccount.Account;
					value.Password = msgAccount.Password;
					value.Server = msgAccount.ServerName;
					if (!ValidateLoginRules(value))
					{
						return;
					}
					Database.AttemptLogin(value);
					break;
				}
				case 1052:
				{
					MsgConnect msgConnect = new MsgConnect(next);
					msgConnect.Process(value);
					break;
				}
				case 1100:
				{
					MsgMacAddr msgMacAddr = new MsgMacAddr(next);
					msgMacAddr.Process(value);
					break;
				}
				default:
					value.Network.Kick("Invalid Auth Packet Sent");
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

	public void ProcessAuthSend()
	{
		foreach (AuthClient value in Users.Values)
		{
			if (value.Network.NextSendCandidate(out byte[] next))
			{
				try
				{
					value.Network.DirectSend(next);
				}
				catch (Exception ex)
				{
					World.DebugLog(ex.ToString());
				}
			}
		}
	}
}
