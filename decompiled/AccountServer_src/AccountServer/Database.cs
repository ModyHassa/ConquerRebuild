using System;
using System.Windows;
using System.Windows.Threading;
using MySql.Data.MySqlClient;

namespace AccountServer;

public class Database
{
	public static string AuthConnectionString = string.Empty;

	public static string GameConnectionString = string.Empty;

	public static void AttemptLogin(AuthClient Client)
	{
		try
		{
			GameServer value = null;
			if (!World.Servers.TryGetValue(Client.Server.GenerateHash(), out value) || value.State != ServerState.Normal || !ValidateAccount(Client))
			{
				return;
			}
			if (BannedMac(Client))
			{
				World.FormInstance.WriteLine("SECURITY: Rejected blacklisted MAC {0}.", Client.MacAddress);
				LoginReply(Client, 0, 25, "", 0u);
				LogLoginAttempt(0, Client.Username, Client.Network.RemoteIP(), Client.MacAddress, success: false, "MAC Banned");
				return;
			}
			if (Client.AccountStatus == AccountStatus.Banned)
			{
				World.FormInstance.WriteLine("SECURITY: Account '{0}' is banned.", Client.Username);
				LoginReply(Client, 0, 12, "", 0u);
				LogLoginAttempt(Client.AccountId, Client.Username, Client.Network.RemoteIP(), Client.MacAddress, success: false, "Account Banned");
				return;
			}
			if (World.GMOnly && Client.AccountType == 0)
			{
				World.FormInstance.WriteLine("SECURITY: Account '{0}' rejected — GM Only mode.", Client.Username);
				LoginReply(Client, 0, 22, "", 0u);
				LogLoginAttempt(Client.AccountId, Client.Username, Client.Network.RemoteIP(), Client.MacAddress, success: false, "GM Only Mode");
				return;
			}
			using (RecycledPacket recycledPacket = new RecycledPacket())
			{
				Packet stream = recycledPacket.GetStream();
				MsgConnect msgConnect = new MsgConnect(Client.AccountId, Client.AuthHash, $"{Client.AccountVip}.0");
				msgConnect.ToBytes(stream);
				value.Connection.Network.Send(stream);
			}
			ExecuteSql($"UPDATE accounts SET online_us = 1 WHERE id = '{Client.AccountId}'", AuthConnectionString);
			OnlineAccount onlineAccount = new OnlineAccount(Client);
			value.OnlineAccounts.TryAdd(onlineAccount.AccountId, onlineAccount);
			LoginReply(Client, Client.AccountId, Client.AuthHash, value.IPAddress, value.Port);
			LogLoginAttempt(Client.AccountId, Client.Username, Client.Network.RemoteIP(), Client.MacAddress, success: true, "");
			World.FormInstance.WriteLine("AUTH: Account '{0}' authenticated and synced.", Client.Username);
			((DispatcherObject)Application.Current).Dispatcher.BeginInvoke((Delegate)(Action)delegate
			{
				World.FormInstance.RefreshOnlinePlayers();
			}, Array.Empty<object>());
		}
		catch (Exception ex)
		{
			World.DebugLog(ex.ToString());
		}
	}

	public static bool ValidateAccount(AuthClient Client)
	{
		if (string.IsNullOrEmpty(Client.Username))
		{
			return false;
		}
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(AuthConnectionString);
			mySqlConnection.Open();
			int num = 0;
			using (MySqlCommand mySqlCommand = new MySqlCommand("SELECT id FROM accounts WHERE name = @username LIMIT 1", mySqlConnection))
			{
				mySqlCommand.Parameters.AddWithValue("@username", Client.Username);
				object obj = mySqlCommand.ExecuteScalar();
				if (obj == null)
				{
					return false;
				}
				num = Convert.ToInt32(obj);
			}
			CheckVipStatus(num, mySqlConnection);
			using MySqlCommand mySqlCommand2 = new MySqlCommand("SELECT * FROM accounts WHERE id = @id LIMIT 1", mySqlConnection);
			mySqlCommand2.Parameters.AddWithValue("@id", num);
			using MySqlDataReader mySqlDataReader = mySqlCommand2.ExecuteReader();
			if (!mySqlDataReader.Read())
			{
				return false;
			}
			Client.AccountId = mySqlDataReader.GetInt32("id");
			Client.AccountStatus = (AccountStatus)mySqlDataReader.GetInt32("banned");
			Client.AccountType = mySqlDataReader.GetInt32("type");
			int ordinal = mySqlDataReader.GetOrdinal("vip");
			Client.AccountVip = ((!mySqlDataReader.IsDBNull(ordinal)) ? mySqlDataReader.GetInt32(ordinal) : 0);
			int ordinal2 = mySqlDataReader.GetOrdinal("macaddr");
			Client.MacAddress = (mySqlDataReader.IsDBNull(ordinal2) ? "" : mySqlDataReader.GetString(ordinal2));
			return true;
		}
		catch
		{
			return false;
		}
	}

	private static void CheckVipStatus(int accountId, MySqlConnection conn)
	{
		try
		{
			string cmdText = "UPDATE accounts a LEFT JOIN vips v ON a.id = v.account_id\n                    SET a.vip = CASE WHEN v.account_id IS NULL THEN 0 WHEN v.vip_expires <= NOW() THEN 0 ELSE v.vip_level END,\n                        v.days_left = CASE WHEN v.account_id IS NOT NULL AND v.vip_expires > NOW() THEN DATEDIFF(v.vip_expires, NOW()) ELSE 0 END\n                    WHERE a.id = @id";
			using MySqlCommand mySqlCommand = new MySqlCommand(cmdText, conn);
			mySqlCommand.Parameters.AddWithValue("@id", accountId);
			mySqlCommand.ExecuteNonQuery();
		}
		catch (Exception ex)
		{
			World.DebugLog("VipCheck Critical Error: " + ex.Message);
		}
	}

	public static string GetPassword(string username)
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(AuthConnectionString);
			mySqlConnection.Open();
			using MySqlCommand mySqlCommand = new MySqlCommand("SELECT password FROM accounts WHERE name = @name", mySqlConnection);
			mySqlCommand.Parameters.AddWithValue("@name", username);
			return mySqlCommand.ExecuteScalar()?.ToString();
		}
		catch
		{
			return null;
		}
	}

	public static void UpdateAccount(AuthClient Client)
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(AuthConnectionString);
			mySqlConnection.Open();
			using MySqlCommand mySqlCommand = new MySqlCommand("UPDATE accounts SET macaddr = @mac WHERE id = @id", mySqlConnection);
			mySqlCommand.Parameters.AddWithValue("@mac", Client.MacAddress);
			mySqlCommand.Parameters.AddWithValue("@id", Client.AccountId);
			mySqlCommand.ExecuteNonQuery();
		}
		catch
		{
		}
	}

	public static bool BannedMac(AuthClient client)
	{
		if (string.IsNullOrEmpty(client.MacAddress))
		{
			return false;
		}
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(AuthConnectionString);
			mySqlConnection.Open();
			using MySqlCommand mySqlCommand = new MySqlCommand("SELECT COUNT(*) FROM mac_bans WHERE mac_address = @mac", mySqlConnection);
			mySqlCommand.Parameters.AddWithValue("@mac", client.MacAddress);
			return Convert.ToInt32(mySqlCommand.ExecuteScalar()) > 0;
		}
		catch
		{
			return false;
		}
	}

	public static void LogLoginAttempt(int accountId, string accountName, string ip, string mac, bool success, string reason)
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(AuthConnectionString);
			mySqlConnection.Open();
			using MySqlCommand mySqlCommand = new MySqlCommand("INSERT INTO login_history (account_id, account_name, ip_address, mac_address, success, failure_reason, attempted_at) VALUES (@aid, @name, @ip, @mac, @success, @reason, NOW())", mySqlConnection);
			mySqlCommand.Parameters.AddWithValue("@aid", accountId);
			mySqlCommand.Parameters.AddWithValue("@name", accountName ?? "");
			mySqlCommand.Parameters.AddWithValue("@ip", ip ?? "");
			mySqlCommand.Parameters.AddWithValue("@mac", mac ?? "");
			mySqlCommand.Parameters.AddWithValue("@success", success ? 1 : 0);
			mySqlCommand.Parameters.AddWithValue("@reason", reason ?? "");
			mySqlCommand.ExecuteNonQuery();
		}
		catch
		{
		}
	}

	public static void LogAuditAction(string action, int targetAccountId, string targetInfo, string details)
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(AuthConnectionString);
			mySqlConnection.Open();
			using MySqlCommand mySqlCommand = new MySqlCommand("INSERT INTO admin_audit_log (action, target_account_id, target_info, details, performed_at) VALUES (@action, @tid, @tinfo, @details, NOW())", mySqlConnection);
			mySqlCommand.Parameters.AddWithValue("@action", action);
			mySqlCommand.Parameters.AddWithValue("@tid", targetAccountId);
			mySqlCommand.Parameters.AddWithValue("@tinfo", targetInfo ?? "");
			mySqlCommand.Parameters.AddWithValue("@details", details ?? "");
			mySqlCommand.ExecuteNonQuery();
		}
		catch
		{
		}
	}

	public static void RecordPlayerSnapshot(int playerCount, int serverCount)
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(AuthConnectionString);
			mySqlConnection.Open();
			using (MySqlCommand mySqlCommand = new MySqlCommand("INSERT INTO player_snapshots (player_count, server_count, snapshot_at) VALUES (@pc, @sc, NOW())", mySqlConnection))
			{
				mySqlCommand.Parameters.AddWithValue("@pc", playerCount);
				mySqlCommand.Parameters.AddWithValue("@sc", serverCount);
				mySqlCommand.ExecuteNonQuery();
			}
			using MySqlCommand mySqlCommand2 = new MySqlCommand("DELETE FROM player_snapshots WHERE snapshot_at < DATE_SUB(NOW(), INTERVAL 7 DAY)", mySqlConnection);
			mySqlCommand2.ExecuteNonQuery();
		}
		catch
		{
		}
	}

	public static void ExecuteSql(string Query, string connStr)
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(connStr);
			mySqlConnection.Open();
			using MySqlCommand mySqlCommand = new MySqlCommand(Query, mySqlConnection);
			mySqlCommand.ExecuteNonQuery();
		}
		catch
		{
		}
	}

	public static void LoginReply(AuthClient Client, int AccountId, int dwData, string IPAddress, uint Port)
	{
		using RecycledPacket recycledPacket = new RecycledPacket();
		Packet stream = recycledPacket.GetStream();
		MsgLoginReply msgLoginReply = new MsgLoginReply(AccountId, dwData, IPAddress, Port);
		msgLoginReply.ToBytes(stream);
		Client.Network.Send(stream);
	}

	public static bool ConnectionTest(string u, string p, string d, string h, ushort prt, ref string cs)
	{
		MySqlConnectionStringBuilder mySqlConnectionStringBuilder = new MySqlConnectionStringBuilder
		{
			Server = h,
			UserID = u,
			Password = p,
			Database = d,
			Port = prt
		};
		cs = mySqlConnectionStringBuilder.ConnectionString;
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(cs);
			mySqlConnection.Open();
			return true;
		}
		catch
		{
			return false;
		}
	}
}
