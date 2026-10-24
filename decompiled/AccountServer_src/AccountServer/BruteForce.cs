using System;
using System.Collections.Concurrent;
using MySql.Data.MySqlClient;

namespace AccountServer;

public class BruteForce
{
	private static BruteForce _instance;

	public readonly ConcurrentDictionary<string, LoginTry> BruteForceTry;

	public readonly ConcurrentDictionary<string, bool> BruteForceBans;

	public static int BanDurationHours = 24;

	public static BruteForce Instance => _instance ?? (_instance = new BruteForce());

	private BruteForce()
	{
		BruteForceTry = new ConcurrentDictionary<string, LoginTry>();
		BruteForceBans = new ConcurrentDictionary<string, bool>();
		LoadBruteForceBans();
	}

	private void LoadBruteForceBans()
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString);
			mySqlConnection.Open();
			using MySqlCommand mySqlCommand = new MySqlCommand("SELECT `ip` FROM `bruteforce_bans` WHERE `expires_at` IS NULL OR `expires_at` > NOW()", mySqlConnection);
			using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
			while (mySqlDataReader.Read())
			{
				BruteForceBans.TryAdd(mySqlDataReader.GetString("ip"), value: true);
			}
		}
		catch (Exception value)
		{
			Console.WriteLine(value);
		}
	}

	public void BanIp(string ip, int durationHours = 0)
	{
		if (ip == "127.0.0.1")
		{
			return;
		}
		int num = ((durationHours > 0) ? durationHours : BanDurationHours);
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString);
			mySqlConnection.Open();
			string cmdText = ((num > 0) ? "INSERT INTO `bruteforce_bans` SET ip = @ip, banned_at = NOW(), expires_at = DATE_ADD(NOW(), INTERVAL @hours HOUR) ON DUPLICATE KEY UPDATE banned_at = NOW(), expires_at = DATE_ADD(NOW(), INTERVAL @hours HOUR)" : "INSERT INTO `bruteforce_bans` SET ip = @ip, banned_at = NOW(), expires_at = NULL ON DUPLICATE KEY UPDATE banned_at = NOW(), expires_at = NULL");
			using MySqlCommand mySqlCommand = new MySqlCommand(cmdText, mySqlConnection);
			mySqlCommand.Parameters.AddWithValue("@ip", ip);
			if (num > 0)
			{
				mySqlCommand.Parameters.AddWithValue("@hours", num);
			}
			mySqlCommand.ExecuteNonQuery();
		}
		catch (Exception value)
		{
			Console.WriteLine(value);
		}
	}

	public void CleanExpiredBans()
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString);
			mySqlConnection.Open();
			using (MySqlCommand mySqlCommand = new MySqlCommand("SELECT ip FROM bruteforce_bans WHERE expires_at IS NOT NULL AND expires_at <= NOW()", mySqlConnection))
			{
				using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
				while (mySqlDataReader.Read())
				{
					string @string = mySqlDataReader.GetString("ip");
					BruteForceBans.TryRemove(@string, out var _);
				}
			}
			using MySqlCommand mySqlCommand2 = new MySqlCommand("DELETE FROM bruteforce_bans WHERE expires_at IS NOT NULL AND expires_at <= NOW()", mySqlConnection);
			int num = mySqlCommand2.ExecuteNonQuery();
			if (num > 0)
			{
				World.FormInstance?.WriteLine("SECURITY: Cleaned {0} expired IP ban(s).", num);
			}
		}
		catch
		{
		}
	}

	public bool Attempt(AuthClient client)
	{
		string text = client.Network.RemoteIP();
		if (BruteForceBans.ContainsKey(text))
		{
			Database.LoginReply(client, 0, 69, "", 0u);
			return false;
		}
		if (!BruteForceTry.ContainsKey(text))
		{
			LoginTry value = new LoginTry
			{
				AuthTry = 0,
				TriedAt = DateTime.UtcNow.AddSeconds(-3.0)
			};
			BruteForceTry.TryAdd(text, value);
		}
		LoginTry loginTry = BruteForceTry[text];
		if (DateTime.UtcNow.Subtract(loginTry.TriedAt).TotalMilliseconds <= 1000.0)
		{
			loginTry.TriedAt = DateTime.UtcNow;
			loginTry.AuthTry++;
			BruteForceTry.TryUpdate(text, loginTry, BruteForceTry[text]);
			if (loginTry.AuthTry >= 7)
			{
				if (BruteForceBans.TryAdd(text, value: true))
				{
					BanIp(text);
					Database.LoginReply(client, 0, 69, "", 0u);
					World.FormInstance?.WriteLine("SECURITY: Brute force ban triggered for IP {0}.", text);
					Database.LogAuditAction("BruteForce Ban", 0, text, "Auto-banned after 7 rapid attempts");
				}
			}
			else
			{
				Database.LoginReply(client, 0, 9001, "", 0u);
			}
			return false;
		}
		loginTry.TriedAt = DateTime.UtcNow;
		loginTry.AuthTry = 1;
		return true;
	}
}
