using System;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Threading;
using MySql.Data.MySqlClient;

namespace AccountServer;

public class MainWindow : Window, IComponentConnector, IStyleConnector
{
	private DateTime _startTime = DateTime.Now;

	private DispatcherTimer _uptimeTimer;

	private DispatcherTimer _refreshTimer;

	private DispatcherTimer _vipEnforcementTimer;

	private DispatcherTimer _snapshotTimer;

	private DispatcherTimer _bruteForceCleanupTimer;

	internal TextBlock UptimeLabel;

	internal RadioButton NavDashboard;

	internal Grid PanelDashboard;

	internal ListBox listBoxLog;

	internal Grid PanelPlayers;

	internal TextBox PlayerSearchBox;

	internal Button BulkKickBtn;

	internal Button BulkBanBtn;

	internal DataGrid PlayersGrid;

	internal Grid PanelLookup;

	internal TextBox LookupSearchBox;

	internal TextBox VipLevelBox;

	internal TextBox VipDaysBox;

	internal Grid PanelSecurity;

	internal TextBox ManualIpBanBox;

	internal TextBox ManualMacBanBox;

	internal Grid PanelLogs;

	internal CheckBox AutoScrollToggle;

	internal ListBox listBoxLogFull;

	internal Grid PanelAudit;

	internal Grid PanelSettings;

	internal CheckBox GmOnlyToggle;

	private bool _contentLoaded;

	public MainViewModel ViewModel { get; set; }

	public MainWindow()
	{
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		//IL_004b: Expected O, but got Unknown
		InitializeComponent();
		ViewModel = new MainViewModel();
		((FrameworkElement)this).DataContext = ViewModel;
		World.FormInstance = this;
		((FrameworkElement)this).Loaded += new RoutedEventHandler(MainWindow_Loaded);
	}

	protected override void OnClosed(EventArgs e)
	{
		((Window)this).OnClosed(e);
		Environment.Exit(0);
	}

	private void MainWindow_Loaded(object sender, RoutedEventArgs e)
	{
		try
		{
			SetupTimers();
		}
		catch
		{
		}
		try
		{
			LoadConfig();
		}
		catch
		{
		}
		try
		{
			StartServer();
		}
		catch
		{
		}
	}

	private void StartServer()
	{
		try
		{
			string path = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "Config.ini");
			if (File.Exists(path))
			{
				IniFile iniFile = new IniFile(path);
				Database.ConnectionTest(iniFile.ReadString("AuthDatabase", "User"), iniFile.ReadString("AuthDatabase", "Pass"), iniFile.ReadString("AuthDatabase", "Name"), iniFile.ReadString("AuthDatabase", "Host"), iniFile.ReadUInt16("AuthDatabase", "Port"), ref Database.AuthConnectionString);
				Database.ConnectionTest(iniFile.ReadString("GameDatabase", "User"), iniFile.ReadString("GameDatabase", "Pass"), iniFile.ReadString("GameDatabase", "Name"), iniFile.ReadString("GameDatabase", "Host"), iniFile.ReadUInt16("GameDatabase", "Port"), ref Database.GameConnectionString);
				World.LoginServer = new AuthServer(iniFile.ReadUInt16("AccountServer", "AuthPort"));
				World.PointServer = new PointServer(iniFile.ReadUInt16("AccountServer", "LinkPort"));
				World.Factory.Start();
				WriteLine("SYSTEM: Account Server engine and listeners online.");
			}
		}
		catch (Exception ex)
		{
			WriteLine("STARTUP ERROR: {0}", ex.Message);
		}
	}

	private void SetupTimers()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0021: Expected O, but got Unknown
		//IL_0046: Unknown result type (might be due to invalid IL or missing references)
		//IL_004b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0065: Expected O, but got Unknown
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		//IL_008f: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a9: Expected O, but got Unknown
		//IL_00ce: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ed: Expected O, but got Unknown
		//IL_0112: Unknown result type (might be due to invalid IL or missing references)
		//IL_0117: Unknown result type (might be due to invalid IL or missing references)
		//IL_0131: Expected O, but got Unknown
		_uptimeTimer = new DispatcherTimer
		{
			Interval = TimeSpan.FromSeconds(1.0)
		};
		_uptimeTimer.Tick += delegate
		{
			TimeSpan timeSpan = DateTime.Now - _startTime;
			UptimeLabel.Text = $"Uptime: {timeSpan.Days}d {timeSpan.Hours}h {timeSpan.Minutes}m {timeSpan.Seconds}s";
		};
		_uptimeTimer.Start();
		_refreshTimer = new DispatcherTimer
		{
			Interval = TimeSpan.FromSeconds(10.0)
		};
		_refreshTimer.Tick += delegate
		{
			try
			{
				RefreshOnlinePlayers();
			}
			catch
			{
			}
		};
		_refreshTimer.Start();
		_vipEnforcementTimer = new DispatcherTimer
		{
			Interval = TimeSpan.FromSeconds(60.0)
		};
		_vipEnforcementTimer.Tick += delegate
		{
			try
			{
				EnforceVipExpiration();
			}
			catch
			{
			}
		};
		_vipEnforcementTimer.Start();
		_snapshotTimer = new DispatcherTimer
		{
			Interval = TimeSpan.FromMinutes(15.0)
		};
		_snapshotTimer.Tick += delegate
		{
			try
			{
				Database.RecordPlayerSnapshot(ViewModel.PlayerCount, ViewModel.ServerCount);
				LoadPlayerSnapshots();
			}
			catch
			{
			}
		};
		_snapshotTimer.Start();
		_bruteForceCleanupTimer = new DispatcherTimer
		{
			Interval = TimeSpan.FromMinutes(5.0)
		};
		_bruteForceCleanupTimer.Tick += delegate
		{
			try
			{
				BruteForce.Instance.CleanExpiredBans();
			}
			catch
			{
			}
		};
		_bruteForceCleanupTimer.Start();
		try
		{
			LoadPlayerSnapshots();
		}
		catch
		{
		}
		try
		{
			RefreshDashboardStats();
		}
		catch
		{
		}
	}

	private void Nav_Checked(object sender, RoutedEventArgs e)
	{
		RadioButton val = (RadioButton)((sender is RadioButton) ? sender : null);
		if (val == null || !(((FrameworkElement)val).Tag is string text))
		{
			return;
		}
		((UIElement)PanelDashboard).Visibility = (Visibility)((!(text == "Dashboard")) ? 2 : 0);
		((UIElement)PanelPlayers).Visibility = (Visibility)((!(text == "Players")) ? 2 : 0);
		((UIElement)PanelLookup).Visibility = (Visibility)((!(text == "Lookup")) ? 2 : 0);
		((UIElement)PanelSecurity).Visibility = (Visibility)((!(text == "Security")) ? 2 : 0);
		((UIElement)PanelLogs).Visibility = (Visibility)((!(text == "Logs")) ? 2 : 0);
		((UIElement)PanelAudit).Visibility = (Visibility)((!(text == "Audit")) ? 2 : 0);
		((UIElement)PanelSettings).Visibility = (Visibility)((!(text == "Settings")) ? 2 : 0);
		if (text == "Security")
		{
			try
			{
				RefreshBruteForceList();
				RefreshMacBanList();
			}
			catch
			{
			}
		}
		if (text == "Audit")
		{
			try
			{
				RefreshAuditLog();
			}
			catch
			{
			}
		}
	}

	public void WriteLine(string format, params object[] args)
	{
		string message = $"[{DateTime.Now:HH:mm:ss}] {string.Format(format, args)}";
		ViewModel.AddLogMessage(message);
		try
		{
			CheckBox autoScrollToggle = AutoScrollToggle;
			if (autoScrollToggle != null && ((ToggleButton)autoScrollToggle).IsChecked == true)
			{
				ListBox obj = listBoxLog;
				if (obj != null && ((CollectionView)((ItemsControl)obj).Items).Count > 0)
				{
					listBoxLog.ScrollIntoView(((ItemsControl)listBoxLog).Items[((CollectionView)((ItemsControl)listBoxLog).Items).Count - 1]);
				}
				ListBox obj2 = listBoxLogFull;
				if (obj2 != null && ((CollectionView)((ItemsControl)obj2).Items).Count > 0)
				{
					listBoxLogFull.ScrollIntoView(((ItemsControl)listBoxLogFull).Items[((CollectionView)((ItemsControl)listBoxLogFull).Items).Count - 1]);
				}
			}
		}
		catch
		{
		}
	}

	public void RefreshOnlinePlayers()
	{
		try
		{
			using (MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString))
			{
				mySqlConnection.Open();
				string cmdText = "SELECT a.id, a.name, a.online_us, v.vip_level, v.vip_expires\r\n                                   FROM accounts a LEFT JOIN vips v ON a.id = v.account_id\r\n                                   WHERE a.online_us = 1";
				using MySqlCommand mySqlCommand = new MySqlCommand(cmdText, mySqlConnection);
				using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
				ViewModel.OnlinePlayers.Clear();
				while (mySqlDataReader.Read())
				{
					int @int = mySqlDataReader.GetInt32("id");
					string @string = mySqlDataReader.GetString("name");
					int ordinal = mySqlDataReader.GetOrdinal("vip_level");
					int num = ((!mySqlDataReader.IsDBNull(ordinal)) ? mySqlDataReader.GetInt32(ordinal) : 0);
					int ordinal2 = mySqlDataReader.GetOrdinal("vip_expires");
					DateTime? expirationDate = (mySqlDataReader.IsDBNull(ordinal2) ? ((DateTime?)null) : new DateTime?(mySqlDataReader.GetDateTime(ordinal2)));
					string timeRemaining = "";
					if (num > 0 && expirationDate.HasValue)
					{
						if (expirationDate.Value <= DateTime.Now)
						{
							DeleteVipRecord(@int, mySqlConnection);
							num = 0;
							expirationDate = null;
						}
						else
						{
							TimeSpan timeSpan = expirationDate.Value - DateTime.Now;
							timeRemaining = ((timeSpan.TotalDays >= 1.0) ? $"{(int)timeSpan.TotalDays}d {timeSpan.Hours}h" : $"{timeSpan.Hours}h {timeSpan.Minutes}m");
						}
					}
					ViewModel.OnlinePlayers.Add(new AccountModel
					{
						Id = @int,
						CharacterName = @string,
						VipLevel = num,
						ExpirationDate = expirationDate,
						TimeRemaining = timeRemaining
					});
				}
			}
			ViewModel.PlayerCount = ViewModel.OnlinePlayers.Count;
			ViewModel.ServerCount = World.Servers.Count;
			ViewModel.RefreshFilteredPlayers();
			ViewModel.OnPropertyChanged("NoServersVisible");
			RefreshDashboardStats();
		}
		catch (Exception ex)
		{
			World.DebugLog("RefreshPlayers: " + ex.Message);
		}
	}

	private void DeleteVipRecord(int accountId, MySqlConnection conn = null)
	{
		bool flag = conn == null;
		try
		{
			if (flag)
			{
				conn = new MySqlConnection(Database.AuthConnectionString);
				conn.Open();
			}
			using (MySqlCommand mySqlCommand = new MySqlCommand("DELETE FROM vips WHERE account_id = @id", conn))
			{
				mySqlCommand.Parameters.AddWithValue("@id", accountId);
				mySqlCommand.ExecuteNonQuery();
			}
			using (MySqlCommand mySqlCommand2 = new MySqlCommand("UPDATE accounts SET vip = 0 WHERE id = @id", conn))
			{
				mySqlCommand2.Parameters.AddWithValue("@id", accountId);
				mySqlCommand2.ExecuteNonQuery();
			}
			WriteLine("VIP SYSTEM: Account {0} VIP expired — record cleaned.", accountId);
		}
		catch
		{
		}
		finally
		{
			if (flag)
			{
				conn?.Dispose();
			}
		}
	}

	private void EnforceVipExpiration()
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString);
			mySqlConnection.Open();
			string cmdText = "SELECT a.id, a.name FROM accounts a\r\n                                   INNER JOIN vips v ON a.id = v.account_id\r\n                                   WHERE a.online_us = 1 AND v.vip_expires <= NOW()";
			List<(int, string)> list = new List<(int, string)>();
			using (MySqlCommand mySqlCommand = new MySqlCommand(cmdText, mySqlConnection))
			{
				using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
				while (mySqlDataReader.Read())
				{
					list.Add((mySqlDataReader.GetInt32("id"), mySqlDataReader.GetString("name")));
				}
			}
			foreach (var (num, text) in list)
			{
				KickPlayer(num);
				DeleteVipRecord(num, mySqlConnection);
				WriteLine("VIP SYSTEM: Account {0} ({1}) expired mid-session — kicked.", num, text);
			}
		}
		catch
		{
		}
	}

	private void RefreshDashboardStats()
	{
		try
		{
			ViewModel.BruteForceCount = BruteForce.Instance.BruteForceBans.Count;
			ViewModel.ActiveBruteForceAttempts = BruteForce.Instance.BruteForceTry.Count;
			using MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString);
			mySqlConnection.Open();
			using (MySqlCommand mySqlCommand = new MySqlCommand("SELECT COUNT(*) FROM login_history WHERE success = 0 AND attempted_at >= DATE_SUB(NOW(), INTERVAL 24 HOUR)", mySqlConnection))
			{
				ViewModel.FailedLogins = Convert.ToInt32(mySqlCommand.ExecuteScalar());
			}
			using MySqlCommand mySqlCommand2 = new MySqlCommand("SELECT COUNT(*) FROM mac_bans", mySqlConnection);
			ViewModel.MacBanCount = Convert.ToInt32(mySqlCommand2.ExecuteScalar());
		}
		catch
		{
		}
	}

	private void LoadPlayerSnapshots()
	{
		try
		{
			ViewModel.PlayerSnapshots.Clear();
			using MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString);
			mySqlConnection.Open();
			string cmdText = "SELECT player_count, snapshot_at FROM player_snapshots\r\n                                   WHERE snapshot_at >= DATE_SUB(NOW(), INTERVAL 24 HOUR)\r\n                                   ORDER BY snapshot_at ASC LIMIT 96";
			List<(int, DateTime)> list = new List<(int, DateTime)>();
			using (MySqlCommand mySqlCommand = new MySqlCommand(cmdText, mySqlConnection))
			{
				using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
				while (mySqlDataReader.Read())
				{
					list.Add((mySqlDataReader.GetInt32("player_count"), mySqlDataReader.GetDateTime("snapshot_at")));
				}
			}
			int num = ((list.Count <= 0) ? 1 : list.Max<(int, DateTime)>(((int count, DateTime time) s) => s.count));
			if (num < 1)
			{
				num = 1;
			}
			double num2 = 100.0;
			foreach (var (num3, dateTime) in list)
			{
				ViewModel.PlayerSnapshots.Add(new PlayerSnapshotModel
				{
					PlayerCount = num3,
					Time = dateTime.ToString("HH:mm"),
					BarHeight = (double)num3 / (double)num * num2
				});
			}
		}
		catch
		{
		}
	}

	private void LookupSearch_Click(object sender, RoutedEventArgs e)
	{
		PerformAccountLookup();
	}

	private void LookupSearch_KeyDown(object sender, KeyEventArgs e)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Invalid comparison between Unknown and I4
		if ((int)e.Key == 6)
		{
			PerformAccountLookup();
		}
	}

	private void PerformAccountLookup()
	{
		//IL_032e: Unknown result type (might be due to invalid IL or missing references)
		//IL_020a: Unknown result type (might be due to invalid IL or missing references)
		//IL_020f: Unknown result type (might be due to invalid IL or missing references)
		//IL_01f5: Unknown result type (might be due to invalid IL or missing references)
		//IL_01fa: Unknown result type (might be due to invalid IL or missing references)
		//IL_0219: Expected O, but got Unknown
		string text = LookupSearchBox.Text?.Trim();
		if (string.IsNullOrEmpty(text))
		{
			return;
		}
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString);
			mySqlConnection.Open();
			int result;
			string cmdText = ((!int.TryParse(text, out result)) ? "SELECT a.*, v.vip_level, v.vip_expires FROM accounts a LEFT JOIN vips v ON a.id = v.account_id WHERE a.name = @q LIMIT 1" : "SELECT a.*, v.vip_level, v.vip_expires FROM accounts a LEFT JOIN vips v ON a.id = v.account_id WHERE a.id = @q LIMIT 1");
			AccountProfileModel accountProfileModel = null;
			using (MySqlCommand mySqlCommand = new MySqlCommand(cmdText, mySqlConnection))
			{
				mySqlCommand.Parameters.AddWithValue("@q", text);
				using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
				if (mySqlDataReader.Read())
				{
					int @int = mySqlDataReader.GetInt32("banned");
					int ordinal = mySqlDataReader.GetOrdinal("vip_level");
					int num = ((!mySqlDataReader.IsDBNull(ordinal)) ? mySqlDataReader.GetInt32(ordinal) : 0);
					int ordinal2 = mySqlDataReader.GetOrdinal("vip_expires");
					DateTime? vipExpires = (mySqlDataReader.IsDBNull(ordinal2) ? ((DateTime?)null) : new DateTime?(mySqlDataReader.GetDateTime(ordinal2)));
					string vipDisplay = "None";
					if (num > 0 && vipExpires.HasValue && vipExpires.Value > DateTime.Now)
					{
						vipDisplay = $"Level {num} — expires {vipExpires.Value:yyyy-MM-dd HH:mm}";
					}
					int ordinal3 = mySqlDataReader.GetOrdinal("macaddr");
					string macAddress = (mySqlDataReader.IsDBNull(ordinal3) ? "" : mySqlDataReader.GetString(ordinal3));
					accountProfileModel = new AccountProfileModel
					{
						Id = mySqlDataReader.GetInt32("id"),
						Username = mySqlDataReader.GetString("name"),
						Status = ((@int > 0) ? "Banned" : "Normal"),
						StatusColor = (Brush)((@int > 0) ? new SolidColorBrush(Color.FromRgb((byte)248, (byte)81, (byte)73)) : new SolidColorBrush(Color.FromRgb((byte)63, (byte)185, (byte)80))),
						AccountType = mySqlDataReader.GetInt32("type"),
						MacAddress = macAddress,
						LastIP = "",
						VipLevel = num,
						VipExpires = vipExpires,
						VipDisplay = vipDisplay,
						IsOnline = (mySqlDataReader.GetInt32("online_us") == 1)
					};
				}
			}
			if (accountProfileModel == null)
			{
				using (MySqlCommand mySqlCommand2 = new MySqlCommand("SELECT DISTINCT account_id FROM login_history WHERE ip_address = @q OR mac_address = @q ORDER BY attempted_at DESC LIMIT 1", mySqlConnection))
				{
					mySqlCommand2.Parameters.AddWithValue("@q", text);
					object obj = mySqlCommand2.ExecuteScalar();
					if (obj != null)
					{
						LookupSearchBox.Text = obj.ToString();
						PerformAccountLookup();
						return;
					}
				}
				ViewModel.LookupProfile = new AccountProfileModel();
				MessageBox.Show("No account found for: " + text, "Lookup", (MessageBoxButton)0, (MessageBoxImage)64);
			}
			else
			{
				using (MySqlCommand mySqlCommand3 = new MySqlCommand("SELECT ip_address FROM login_history WHERE account_id = @id ORDER BY attempted_at DESC LIMIT 1", mySqlConnection))
				{
					mySqlCommand3.Parameters.AddWithValue("@id", accountProfileModel.Id);
					accountProfileModel.LastIP = mySqlCommand3.ExecuteScalar()?.ToString() ?? "Unknown";
				}
				ViewModel.LookupProfile = accountProfileModel;
				LoadRelatedAccounts(accountProfileModel.Id, accountProfileModel.LastIP, accountProfileModel.MacAddress, mySqlConnection);
				LoadAccountLoginHistory(accountProfileModel.Id, mySqlConnection);
			}
		}
		catch (Exception ex)
		{
			WriteLine("SYSTEM: Lookup error — {0}", ex.Message);
		}
	}

	private void LoadRelatedAccounts(int accountId, string ip, string mac, MySqlConnection conn)
	{
		ViewModel.RelatedAccounts.Clear();
		HashSet<int> hashSet = new HashSet<int> { accountId };
		if (!string.IsNullOrEmpty(ip))
		{
			using MySqlCommand mySqlCommand = new MySqlCommand("SELECT DISTINCT lh.account_id, a.name FROM login_history lh INNER JOIN accounts a ON lh.account_id = a.id WHERE lh.ip_address = @ip AND lh.account_id != @aid ORDER BY lh.attempted_at DESC LIMIT 20", conn);
			mySqlCommand.Parameters.AddWithValue("@ip", ip);
			mySqlCommand.Parameters.AddWithValue("@aid", accountId);
			using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
			while (mySqlDataReader.Read())
			{
				int @int = mySqlDataReader.GetInt32("account_id");
				if (hashSet.Add(@int))
				{
					ViewModel.RelatedAccounts.Add(new RelatedAccountModel
					{
						Id = @int,
						Username = mySqlDataReader.GetString("name"),
						MatchType = "Same IP",
						MatchValue = ip
					});
				}
			}
		}
		if (string.IsNullOrEmpty(mac))
		{
			return;
		}
		using MySqlCommand mySqlCommand2 = new MySqlCommand("SELECT id, name FROM accounts WHERE macaddr = @mac AND id != @aid LIMIT 20", conn);
		mySqlCommand2.Parameters.AddWithValue("@mac", mac);
		mySqlCommand2.Parameters.AddWithValue("@aid", accountId);
		using MySqlDataReader mySqlDataReader2 = mySqlCommand2.ExecuteReader();
		while (mySqlDataReader2.Read())
		{
			int int2 = mySqlDataReader2.GetInt32("id");
			if (hashSet.Add(int2))
			{
				ViewModel.RelatedAccounts.Add(new RelatedAccountModel
				{
					Id = int2,
					Username = mySqlDataReader2.GetString("name"),
					MatchType = "Same MAC",
					MatchValue = mac
				});
			}
		}
	}

	private void LoadAccountLoginHistory(int accountId, MySqlConnection conn)
	{
		ViewModel.LoginHistory.Clear();
		using MySqlCommand mySqlCommand = new MySqlCommand("SELECT * FROM login_history WHERE account_id = @id ORDER BY attempted_at DESC LIMIT 50", conn);
		mySqlCommand.Parameters.AddWithValue("@id", accountId);
		using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
		while (mySqlDataReader.Read())
		{
			ViewModel.LoginHistory.Add(new LoginHistoryModel
			{
				AccountName = mySqlDataReader.GetString("account_name"),
				IP = mySqlDataReader.GetString("ip_address"),
				Mac = mySqlDataReader.GetString("mac_address"),
				Result = ((mySqlDataReader.GetInt32("success") == 1) ? "Success" : "Failed"),
				Reason = mySqlDataReader.GetString("failure_reason"),
				AttemptedAt = mySqlDataReader.GetDateTime("attempted_at").ToString("yyyy-MM-dd HH:mm:ss")
			});
		}
	}

	private void GrantVip_Click(object sender, RoutedEventArgs e)
	{
		//IL_005d: Unknown result type (might be due to invalid IL or missing references)
		AccountProfileModel lookupProfile = ViewModel.LookupProfile;
		if (lookupProfile == null || lookupProfile.Id == 0)
		{
			return;
		}
		if (!int.TryParse(VipLevelBox.Text, out var result) || !int.TryParse(VipDaysBox.Text, out var result2))
		{
			MessageBox.Show("Invalid VIP level or days.");
			return;
		}
		try
		{
			using (MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString))
			{
				mySqlConnection.Open();
				using (MySqlCommand mySqlCommand = new MySqlCommand("INSERT INTO vips (account_id, vip_level, days_left, vip_expires)\r\n                          VALUES (@id, @level, @days, DATE_ADD(NOW(), INTERVAL @days DAY))\r\n                          ON DUPLICATE KEY UPDATE vip_level = @level, days_left = @days, vip_expires = DATE_ADD(NOW(), INTERVAL @days DAY)", mySqlConnection))
				{
					mySqlCommand.Parameters.AddWithValue("@id", lookupProfile.Id);
					mySqlCommand.Parameters.AddWithValue("@level", result);
					mySqlCommand.Parameters.AddWithValue("@days", result2);
					mySqlCommand.ExecuteNonQuery();
				}
				using MySqlCommand mySqlCommand2 = new MySqlCommand("UPDATE accounts SET vip = @level WHERE id = @id", mySqlConnection);
				mySqlCommand2.Parameters.AddWithValue("@level", result);
				mySqlCommand2.Parameters.AddWithValue("@id", lookupProfile.Id);
				mySqlCommand2.ExecuteNonQuery();
			}
			Database.LogAuditAction("Grant VIP", lookupProfile.Id, lookupProfile.Username, $"Level {result}, {result2} days");
			WriteLine("VIP SYSTEM: Granted VIP {0} for {1} days to account {2} ({3}).", result, result2, lookupProfile.Id, lookupProfile.Username);
			PerformAccountLookup();
		}
		catch (Exception ex)
		{
			WriteLine("VIP ERROR: {0}", ex.Message);
		}
	}

	private void ExtendVip_Click(object sender, RoutedEventArgs e)
	{
		//IL_0044: Unknown result type (might be due to invalid IL or missing references)
		AccountProfileModel lookupProfile = ViewModel.LookupProfile;
		if (lookupProfile == null || lookupProfile.Id == 0)
		{
			return;
		}
		if (!int.TryParse(VipDaysBox.Text, out var result))
		{
			MessageBox.Show("Invalid days.");
			return;
		}
		try
		{
			using (MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString))
			{
				mySqlConnection.Open();
				using MySqlCommand mySqlCommand = new MySqlCommand("UPDATE vips SET vip_expires = DATE_ADD(\r\n                            CASE WHEN vip_expires > NOW() THEN vip_expires ELSE NOW() END,\r\n                            INTERVAL @days DAY),\r\n                          days_left = DATEDIFF(\r\n                            DATE_ADD(CASE WHEN vip_expires > NOW() THEN vip_expires ELSE NOW() END, INTERVAL @days DAY), NOW())\r\n                          WHERE account_id = @id", mySqlConnection);
				mySqlCommand.Parameters.AddWithValue("@id", lookupProfile.Id);
				mySqlCommand.Parameters.AddWithValue("@days", result);
				mySqlCommand.ExecuteNonQuery();
			}
			Database.LogAuditAction("Extend VIP", lookupProfile.Id, lookupProfile.Username, $"+{result} days");
			WriteLine("VIP SYSTEM: Extended VIP by {0} days for account {1} ({2}).", result, lookupProfile.Id, lookupProfile.Username);
			PerformAccountLookup();
		}
		catch (Exception ex)
		{
			WriteLine("VIP ERROR: {0}", ex.Message);
		}
	}

	private void RevokeVip_Click(object sender, RoutedEventArgs e)
	{
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		//IL_0046: Invalid comparison between Unknown and I4
		AccountProfileModel lookupProfile = ViewModel.LookupProfile;
		if (lookupProfile != null && lookupProfile.Id != 0 && (int)MessageBox.Show("Revoke VIP from " + lookupProfile.Username + "?", "Confirm", (MessageBoxButton)4) == 6)
		{
			DeleteVipRecord(lookupProfile.Id);
			Database.LogAuditAction("Revoke VIP", lookupProfile.Id, lookupProfile.Username, "VIP revoked by admin");
			WriteLine("VIP SYSTEM: Revoked VIP from account {0} ({1}).", lookupProfile.Id, lookupProfile.Username);
			PerformAccountLookup();
		}
	}

	private void LookupKick_Click(object sender, RoutedEventArgs e)
	{
		AccountProfileModel lookupProfile = ViewModel.LookupProfile;
		if (lookupProfile != null && lookupProfile.Id != 0)
		{
			KickPlayer(lookupProfile.Id);
			Database.LogAuditAction("Kick", lookupProfile.Id, lookupProfile.Username, "Kicked from lookup panel");
			WriteLine("SESSION: Admin kicked account {0} ({1}).", lookupProfile.Id, lookupProfile.Username);
			PerformAccountLookup();
		}
	}

	private void LookupBan_Click(object sender, RoutedEventArgs e)
	{
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		//IL_0046: Invalid comparison between Unknown and I4
		AccountProfileModel lookupProfile = ViewModel.LookupProfile;
		if (lookupProfile != null && lookupProfile.Id != 0 && (int)MessageBox.Show("Ban account " + lookupProfile.Username + "?", "Confirm", (MessageBoxButton)4) == 6)
		{
			Database.ExecuteSql($"UPDATE accounts SET banned = 1 WHERE id = '{lookupProfile.Id}'", Database.AuthConnectionString);
			KickPlayer(lookupProfile.Id);
			Database.LogAuditAction("Ban Account", lookupProfile.Id, lookupProfile.Username, "Banned from lookup panel");
			WriteLine("SECURITY: Admin banned account {0} ({1}).", lookupProfile.Id, lookupProfile.Username);
			PerformAccountLookup();
		}
	}

	private void LookupUnban_Click(object sender, RoutedEventArgs e)
	{
		AccountProfileModel lookupProfile = ViewModel.LookupProfile;
		if (lookupProfile != null && lookupProfile.Id != 0)
		{
			Database.ExecuteSql($"UPDATE accounts SET banned = 0 WHERE id = '{lookupProfile.Id}'", Database.AuthConnectionString);
			Database.LogAuditAction("Unban Account", lookupProfile.Id, lookupProfile.Username, "Unbanned from lookup panel");
			WriteLine("SECURITY: Admin unbanned account {0} ({1}).", lookupProfile.Id, lookupProfile.Username);
			PerformAccountLookup();
		}
	}

	private void LookupMacBan_Click(object sender, RoutedEventArgs e)
	{
		//IL_004a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0050: Invalid comparison between Unknown and I4
		AccountProfileModel lookupProfile = ViewModel.LookupProfile;
		if (lookupProfile != null && lookupProfile.Id != 0 && !string.IsNullOrEmpty(lookupProfile.MacAddress) && (int)MessageBox.Show("MAC ban " + lookupProfile.MacAddress + "?\nThis will affect ALL accounts using this hardware.", "Confirm", (MessageBoxButton)4) == 6)
		{
			BanMacAddress(lookupProfile.MacAddress);
			KickPlayer(lookupProfile.Id);
			Database.LogAuditAction("MAC Ban", lookupProfile.Id, lookupProfile.Username, "MAC: " + lookupProfile.MacAddress);
			WriteLine("SECURITY: Admin MAC-banned {0} (account {1}).", lookupProfile.MacAddress, lookupProfile.Username);
		}
	}

	private void PlayerSearch_TextChanged(object sender, TextChangedEventArgs e)
	{
		ViewModel.PlayerSearchText = PlayerSearchBox.Text;
	}

	private void RefreshPlayers_Click(object sender, RoutedEventArgs e)
	{
		RefreshOnlinePlayers();
	}

	private void PlayerCheckbox_Click(object sender, RoutedEventArgs e)
	{
		ViewModel.NotifySelectionChanged();
	}

	private void KickButton_Click(object sender, RoutedEventArgs e)
	{
		Button val = (Button)((sender is Button) ? sender : null);
		if (val != null && ((FrameworkElement)val).DataContext is AccountModel accountModel)
		{
			KickPlayer(accountModel.Id);
			Database.LogAuditAction("Kick", accountModel.Id, accountModel.CharacterName, "Kicked from player list");
			WriteLine("SESSION: Admin kicked account {0} ({1}).", accountModel.Id, accountModel.CharacterName);
			RefreshOnlinePlayers();
		}
	}

	private void BanButton_Click(object sender, RoutedEventArgs e)
	{
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		//IL_0047: Invalid comparison between Unknown and I4
		Button val = (Button)((sender is Button) ? sender : null);
		if (val != null && ((FrameworkElement)val).DataContext is AccountModel accountModel && (int)MessageBox.Show("Ban " + accountModel.CharacterName + "?", "Confirm", (MessageBoxButton)4) == 6)
		{
			Database.ExecuteSql($"UPDATE accounts SET banned = 1 WHERE id = '{accountModel.Id}'", Database.AuthConnectionString);
			KickPlayer(accountModel.Id);
			Database.LogAuditAction("Ban Account", accountModel.Id, accountModel.CharacterName, "Banned from player list");
			WriteLine("SECURITY: Admin banned account {0} ({1}).", accountModel.Id, accountModel.CharacterName);
			RefreshOnlinePlayers();
		}
	}

	private void MacBanButton_Click(object sender, RoutedEventArgs e)
	{
		//IL_00de: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e4: Invalid comparison between Unknown and I4
		//IL_00bd: Unknown result type (might be due to invalid IL or missing references)
		Button val = (Button)((sender is Button) ? sender : null);
		if (val == null || !(((FrameworkElement)val).DataContext is AccountModel accountModel))
		{
			return;
		}
		try
		{
			string text = "";
			using (MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString))
			{
				mySqlConnection.Open();
				using MySqlCommand mySqlCommand = new MySqlCommand("SELECT macaddr FROM accounts WHERE id = @id", mySqlConnection);
				mySqlCommand.Parameters.AddWithValue("@id", accountModel.Id);
				text = mySqlCommand.ExecuteScalar()?.ToString() ?? "";
			}
			if (string.IsNullOrEmpty(text))
			{
				MessageBox.Show("No MAC address on file.");
			}
			else if ((int)MessageBox.Show("MAC ban " + text + "?", "Confirm", (MessageBoxButton)4) == 6)
			{
				BanMacAddress(text);
				KickPlayer(accountModel.Id);
				Database.LogAuditAction("MAC Ban", accountModel.Id, accountModel.CharacterName, "MAC: " + text);
				WriteLine("SECURITY: MAC-banned {0} (account {1}).", text, accountModel.CharacterName);
				RefreshOnlinePlayers();
			}
		}
		catch
		{
		}
	}

	private void BulkKick_Click(object sender, RoutedEventArgs e)
	{
		//IL_0087: Unknown result type (might be due to invalid IL or missing references)
		//IL_008d: Invalid comparison between Unknown and I4
		List<AccountModel> list = ViewModel.FilteredPlayers.Where((AccountModel p) => p.IsSelected).ToList();
		if (list.Count == 0 || (int)MessageBox.Show($"Kick {list.Count} player(s)?", "Bulk Kick", (MessageBoxButton)4) != 6)
		{
			return;
		}
		foreach (AccountModel item in list)
		{
			KickPlayer(item.Id);
			Database.LogAuditAction("Bulk Kick", item.Id, item.CharacterName, $"Part of bulk kick ({list.Count} players)");
		}
		WriteLine("SESSION: Admin bulk-kicked {0} player(s).", list.Count);
		RefreshOnlinePlayers();
	}

	private void BulkBan_Click(object sender, RoutedEventArgs e)
	{
		//IL_0089: Unknown result type (might be due to invalid IL or missing references)
		//IL_008f: Invalid comparison between Unknown and I4
		List<AccountModel> list = ViewModel.FilteredPlayers.Where((AccountModel p) => p.IsSelected).ToList();
		if (list.Count == 0 || (int)MessageBox.Show($"BAN {list.Count} player(s)? This cannot be easily undone.", "Bulk Ban", (MessageBoxButton)4, (MessageBoxImage)48) != 6)
		{
			return;
		}
		foreach (AccountModel item in list)
		{
			Database.ExecuteSql($"UPDATE accounts SET banned = 1 WHERE id = '{item.Id}'", Database.AuthConnectionString);
			KickPlayer(item.Id);
			Database.LogAuditAction("Bulk Ban", item.Id, item.CharacterName, $"Part of bulk ban ({list.Count} players)");
		}
		WriteLine("SECURITY: Admin bulk-banned {0} player(s).", list.Count);
		RefreshOnlinePlayers();
	}

	private void RefreshBruteForce_Click(object sender, RoutedEventArgs e)
	{
		RefreshBruteForceList();
	}

	private void RefreshMacBans_Click(object sender, RoutedEventArgs e)
	{
		RefreshMacBanList();
	}

	private void RefreshBruteForceList()
	{
		try
		{
			ViewModel.BannedIPs.Clear();
			using (MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString))
			{
				mySqlConnection.Open();
				using MySqlCommand mySqlCommand = new MySqlCommand("SELECT * FROM bruteforce_bans ORDER BY banned_at DESC", mySqlConnection);
				using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
				while (mySqlDataReader.Read())
				{
					int ordinal = mySqlDataReader.GetOrdinal("expires_at");
					bool flag = mySqlDataReader.IsDBNull(ordinal);
					ViewModel.BannedIPs.Add(new BannedIPModel
					{
						IP = mySqlDataReader.GetString("ip"),
						BannedAt = mySqlDataReader.GetDateTime("banned_at").ToString("yyyy-MM-dd HH:mm"),
						ExpiresAt = (flag ? "Permanent" : mySqlDataReader.GetDateTime(ordinal).ToString("yyyy-MM-dd HH:mm")),
						IsPermanent = flag
					});
				}
			}
			ViewModel.BruteForceCount = ViewModel.BannedIPs.Count;
		}
		catch
		{
		}
	}

	private void RefreshMacBanList()
	{
		try
		{
			ViewModel.BannedMACs.Clear();
			using (MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString))
			{
				mySqlConnection.Open();
				using MySqlCommand mySqlCommand = new MySqlCommand("SELECT mac_address FROM mac_bans ORDER BY id DESC", mySqlConnection);
				using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
				while (mySqlDataReader.Read())
				{
					ViewModel.BannedMACs.Add(new BannedMACModel
					{
						MacAddress = mySqlDataReader.GetString("mac_address")
					});
				}
			}
			ViewModel.MacBanCount = ViewModel.BannedMACs.Count;
		}
		catch
		{
		}
	}

	private void ManualIpBan_Click(object sender, RoutedEventArgs e)
	{
		string text = ManualIpBanBox.Text?.Trim();
		if (!string.IsNullOrEmpty(text))
		{
			BruteForce.Instance.BanIp(text);
			BruteForce.Instance.BruteForceBans.TryAdd(text, value: true);
			Database.LogAuditAction("Manual IP Ban", 0, text, "Permanently banned via security panel");
			WriteLine("SECURITY: Admin manually banned IP {0}.", text);
			ManualIpBanBox.Text = "";
			RefreshBruteForceList();
		}
	}

	private void ManualMacBan_Click(object sender, RoutedEventArgs e)
	{
		string text = ManualMacBanBox.Text?.Trim();
		if (!string.IsNullOrEmpty(text))
		{
			BanMacAddress(text);
			Database.LogAuditAction("Manual MAC Ban", 0, text, "Banned via security panel");
			WriteLine("SECURITY: Admin manually banned MAC {0}.", text);
			ManualMacBanBox.Text = "";
			RefreshMacBanList();
		}
	}

	private void UnbanIP_Click(object sender, RoutedEventArgs e)
	{
		Button val = (Button)((sender is Button) ? sender : null);
		if (val == null || !(((FrameworkElement)val).DataContext is BannedIPModel bannedIPModel))
		{
			return;
		}
		try
		{
			using (MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString))
			{
				mySqlConnection.Open();
				using MySqlCommand mySqlCommand = new MySqlCommand("DELETE FROM bruteforce_bans WHERE ip = @ip", mySqlConnection);
				mySqlCommand.Parameters.AddWithValue("@ip", bannedIPModel.IP);
				mySqlCommand.ExecuteNonQuery();
			}
			BruteForce.Instance.BruteForceBans.TryRemove(bannedIPModel.IP, out var _);
			Database.LogAuditAction("Unban IP", 0, bannedIPModel.IP, "Unbanned via security panel");
			WriteLine("SECURITY: Unbanned IP {0}.", bannedIPModel.IP);
			RefreshBruteForceList();
		}
		catch
		{
		}
	}

	private void UnbanMAC_Click(object sender, RoutedEventArgs e)
	{
		Button val = (Button)((sender is Button) ? sender : null);
		if (val == null || !(((FrameworkElement)val).DataContext is BannedMACModel bannedMACModel))
		{
			return;
		}
		try
		{
			using (MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString))
			{
				mySqlConnection.Open();
				using MySqlCommand mySqlCommand = new MySqlCommand("DELETE FROM mac_bans WHERE mac_address = @mac", mySqlConnection);
				mySqlCommand.Parameters.AddWithValue("@mac", bannedMACModel.MacAddress);
				mySqlCommand.ExecuteNonQuery();
			}
			Database.LogAuditAction("Unban MAC", 0, bannedMACModel.MacAddress, "Unbanned via security panel");
			WriteLine("SECURITY: Unbanned MAC {0}.", bannedMACModel.MacAddress);
			RefreshMacBanList();
		}
		catch
		{
		}
	}

	private void BanMacAddress(string mac)
	{
		try
		{
			using MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString);
			mySqlConnection.Open();
			using MySqlCommand mySqlCommand = new MySqlCommand("INSERT IGNORE INTO mac_bans (mac_address) VALUES (@mac)", mySqlConnection);
			mySqlCommand.Parameters.AddWithValue("@mac", mac);
			mySqlCommand.ExecuteNonQuery();
		}
		catch
		{
		}
	}

	private void RefreshAudit_Click(object sender, RoutedEventArgs e)
	{
		RefreshAuditLog();
	}

	private void AuditFilter_Changed(object sender, RoutedEventArgs e)
	{
		if (ViewModel != null)
		{
			RadioButton val = (RadioButton)((sender is RadioButton) ? sender : null);
			if (val != null)
			{
				ViewModel.ActiveAuditFilter = ((ContentControl)val).Content.ToString();
			}
		}
	}

	private void RefreshAuditLog()
	{
		try
		{
			ViewModel.AuditLogs.Clear();
			using (MySqlConnection mySqlConnection = new MySqlConnection(Database.AuthConnectionString))
			{
				mySqlConnection.Open();
				using MySqlCommand mySqlCommand = new MySqlCommand("SELECT * FROM admin_audit_log ORDER BY performed_at DESC LIMIT 500", mySqlConnection);
				using MySqlDataReader mySqlDataReader = mySqlCommand.ExecuteReader();
				while (mySqlDataReader.Read())
				{
					ViewModel.AuditLogs.Add(new AuditLogModel
					{
						Action = mySqlDataReader.GetString("action"),
						TargetAccountId = mySqlDataReader.GetInt32("target_account_id"),
						TargetInfo = mySqlDataReader.GetString("target_info"),
						Details = mySqlDataReader.GetString("details"),
						PerformedAt = mySqlDataReader.GetDateTime("performed_at").ToString("yyyy-MM-dd HH:mm:ss")
					});
				}
			}
			ViewModel.RefreshFilteredAudit();
		}
		catch
		{
		}
	}

	private void LogFilter_Changed(object sender, RoutedEventArgs e)
	{
		if (ViewModel != null)
		{
			RadioButton val = (RadioButton)((sender is RadioButton) ? sender : null);
			if (val != null)
			{
				ViewModel.ActiveLogFilter = ((ContentControl)val).Content.ToString();
			}
		}
	}

	private void buttonCopy_Click(object sender, RoutedEventArgs e)
	{
		try
		{
			Clipboard.SetText(string.Join("\n", ViewModel.LogMessages));
		}
		catch
		{
		}
	}

	private void buttonClear_Click(object sender, RoutedEventArgs e)
	{
		ViewModel.LogMessages.Clear();
		ViewModel.FilteredLogs.Clear();
	}

	private void ExportLogs_Click(object sender, RoutedEventArgs e)
	{
		try
		{
			string text = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, $"logs_{DateTime.Now:yyyyMMdd_HHmmss}.txt");
			File.WriteAllLines(text, ViewModel.LogMessages);
			Database.LogAuditAction("Export Logs", 0, "", "Exported to " + text);
			WriteLine("SYSTEM: Logs exported to {0}", text);
		}
		catch (Exception ex)
		{
			WriteLine("SYSTEM: Export failed — {0}", ex.Message);
		}
	}

	private void LoadConfig()
	{
		try
		{
			string path = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "Config.ini");
			if (!File.Exists(path))
			{
				return;
			}
			ViewModel.ConfigEntries.Clear();
			string section = "General";
			string[] array = File.ReadAllLines(path);
			foreach (string text in array)
			{
				string text2 = text.Trim();
				if (string.IsNullOrEmpty(text2) || text2.StartsWith(";") || text2.StartsWith("#"))
				{
					continue;
				}
				if (text2.StartsWith("[") && text2.EndsWith("]"))
				{
					section = text2.Substring(1, text2.Length - 2);
					continue;
				}
				int num = text2.IndexOf('=');
				if (num > 0)
				{
					string key = text2.Substring(0, num).Trim();
					string text3 = text2.Substring(num + 1).Trim();
					ViewModel.ConfigEntries.Add(new ConfigEntryModel
					{
						Section = section,
						Key = key,
						Value = text3,
						OriginalValue = text3
					});
				}
			}
		}
		catch
		{
		}
	}

	private void ReloadConfig_Click(object sender, RoutedEventArgs e)
	{
		LoadConfig();
	}

	private void SaveConfig_Click(object sender, RoutedEventArgs e)
	{
		try
		{
			string path = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "Config.ini");
			if (!File.Exists(path))
			{
				return;
			}
			List<string> list = File.ReadAllLines(path).ToList();
			int num = 0;
			foreach (ConfigEntryModel item in ViewModel.ConfigEntries.Where((ConfigEntryModel e) => e.IsDirty))
			{
				string text = "";
				for (int i = 0; i < list.Count; i++)
				{
					string text2 = list[i].Trim();
					if (text2.StartsWith("[") && text2.EndsWith("]"))
					{
						text = text2.Substring(1, text2.Length - 2);
					}
					if (text == item.Section && (text2.StartsWith(item.Key + "=") || text2.StartsWith(item.Key + " =")))
					{
						list[i] = item.Key + " = " + item.Value;
						item.OriginalValue = item.Value;
						item.OnPropertyChanged("IsDirty");
						num++;
						break;
					}
				}
			}
			File.WriteAllLines(path, list);
			Database.LogAuditAction("Config Save", 0, "", $"{num} value(s) changed");
			WriteLine("SYSTEM: Config.ini saved — {0} value(s) updated.", num);
		}
		catch (Exception ex)
		{
			WriteLine("SYSTEM: Config save failed — {0}", ex.Message);
		}
	}

	private void GmOnly_Changed(object sender, RoutedEventArgs e)
	{
		if (ViewModel != null)
		{
			bool flag = (World.GMOnly = ((ToggleButton)GmOnlyToggle).IsChecked == true);
			ViewModel.GmOnlyStatus = (flag ? "Enabled — non-GM logins blocked" : "Disabled");
			Database.LogAuditAction("GM Only Toggle", 0, "", flag ? "Enabled" : "Disabled");
			WriteLine("SYSTEM: GM Only mode {0}.", flag ? "ENABLED" : "DISABLED");
		}
	}

	private void ResetPlayerBTN_Click(object sender, RoutedEventArgs e)
	{
		//IL_000c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0012: Invalid comparison between Unknown and I4
		if ((int)MessageBox.Show("Reset ALL accounts to offline? Use this if online status is stuck.", "Confirm", (MessageBoxButton)4) == 6)
		{
			Database.ExecuteSql("UPDATE accounts SET online_us = 0", Database.AuthConnectionString);
			Database.LogAuditAction("Reset Online", 0, "", "All accounts set offline");
			WriteLine("SYSTEM: All accounts set to offline.");
			RefreshOnlinePlayers();
		}
	}

	private void KickPlayer(int accountId)
	{
		try
		{
			Database.ExecuteSql($"UPDATE accounts SET online_us = 0 WHERE id = '{accountId}'", Database.AuthConnectionString);
			foreach (KeyValuePair<uint, GameServer> server in World.Servers)
			{
				if (server.Value.OnlineAccounts.ContainsKey(accountId))
				{
					server.Value.Kickout(accountId);
				}
			}
		}
		catch
		{
		}
	}

	public void SetPlayerCount(int count)
	{
		((DispatcherObject)this).Dispatcher.Invoke<int>((Func<int>)(() => ViewModel.PlayerCount = count));
	}

	public void SetPlayerCount()
	{
		((DispatcherObject)this).Dispatcher.Invoke((Action)delegate
		{
			try
			{
				int num = 0;
				if (World.Servers != null)
				{
					foreach (KeyValuePair<uint, GameServer> server in World.Servers)
					{
						num += server.Value.OnlineAccounts.Count;
					}
				}
				ViewModel.PlayerCount = num;
			}
			catch
			{
			}
		});
	}

	public void SetServerCount(int count)
	{
		((DispatcherObject)this).Dispatcher.Invoke<int>((Func<int>)(() => ViewModel.ServerCount = count));
	}

	public void SetServerCount()
	{
		((DispatcherObject)this).Dispatcher.Invoke((Action)delegate
		{
			try
			{
				ViewModel.ServerCount = World.Servers?.Count ?? 0;
			}
			catch
			{
			}
		});
	}

	public void UpdateServerInfo(GameServer server)
	{
		((DispatcherObject)this).Dispatcher.Invoke((Action)delegate
		{
			ServerInfoModel serverInfoModel = ViewModel.ConnectedServers.FirstOrDefault((ServerInfoModel s) => s.Name == server.ServerName);
			if (serverInfoModel != null)
			{
				serverInfoModel.State = server.State.ToString();
				serverInfoModel.PlayerCount = server.OnlineAccounts.Count;
				serverInfoModel.OnPropertyChanged("State");
				serverInfoModel.OnPropertyChanged("PlayerCount");
				serverInfoModel.OnPropertyChanged("StateColor");
			}
			else
			{
				ViewModel.ConnectedServers.Add(new ServerInfoModel
				{
					Name = server.ServerName,
					State = server.State.ToString(),
					PlayerCount = server.OnlineAccounts.Count
				});
			}
			ViewModel.ServerCount = ViewModel.ConnectedServers.Count;
			ViewModel.OnPropertyChanged("NoServersVisible");
		});
	}

	public void RemoveServerInfo(string serverName)
	{
		((DispatcherObject)this).Dispatcher.Invoke((Action)delegate
		{
			ServerInfoModel serverInfoModel = ViewModel.ConnectedServers.FirstOrDefault((ServerInfoModel x) => x.Name == serverName);
			if (serverInfoModel != null)
			{
				ViewModel.ConnectedServers.Remove(serverInfoModel);
			}
			ViewModel.ServerCount = ViewModel.ConnectedServers.Count;
			ViewModel.OnPropertyChanged("NoServersVisible");
		});
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "9.0.11.0")]
	public void InitializeComponent()
	{
		if (!_contentLoaded)
		{
			_contentLoaded = true;
			Uri uri = new Uri("/AccountServerBinary2015;component/mainwindow.xaml", UriKind.Relative);
			Application.LoadComponent((object)this, uri);
		}
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "9.0.11.0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	void IComponentConnector.Connect(int connectionId, object target)
	{
		//IL_0124: Unknown result type (might be due to invalid IL or missing references)
		//IL_012e: Expected O, but got Unknown
		//IL_0135: Unknown result type (might be due to invalid IL or missing references)
		//IL_013f: Expected O, but got Unknown
		//IL_014c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0156: Expected O, but got Unknown
		//IL_015d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0169: Unknown result type (might be due to invalid IL or missing references)
		//IL_0173: Expected O, but got Unknown
		//IL_017a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0186: Unknown result type (might be due to invalid IL or missing references)
		//IL_0190: Expected O, but got Unknown
		//IL_0197: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ad: Expected O, but got Unknown
		//IL_01b4: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c0: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ca: Expected O, but got Unknown
		//IL_01d1: Unknown result type (might be due to invalid IL or missing references)
		//IL_01dd: Unknown result type (might be due to invalid IL or missing references)
		//IL_01e7: Expected O, but got Unknown
		//IL_01ee: Unknown result type (might be due to invalid IL or missing references)
		//IL_01fa: Unknown result type (might be due to invalid IL or missing references)
		//IL_0204: Expected O, but got Unknown
		//IL_020c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0216: Expected O, but got Unknown
		//IL_021d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0227: Expected O, but got Unknown
		//IL_022d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0239: Unknown result type (might be due to invalid IL or missing references)
		//IL_0243: Expected O, but got Unknown
		//IL_024a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0256: Unknown result type (might be due to invalid IL or missing references)
		//IL_0260: Expected O, but got Unknown
		//IL_0267: Unknown result type (might be due to invalid IL or missing references)
		//IL_0273: Unknown result type (might be due to invalid IL or missing references)
		//IL_027d: Expected O, but got Unknown
		//IL_0284: Unknown result type (might be due to invalid IL or missing references)
		//IL_0290: Unknown result type (might be due to invalid IL or missing references)
		//IL_029a: Expected O, but got Unknown
		//IL_02a2: Unknown result type (might be due to invalid IL or missing references)
		//IL_02ac: Expected O, but got Unknown
		//IL_02b3: Unknown result type (might be due to invalid IL or missing references)
		//IL_02bd: Expected O, but got Unknown
		//IL_02ca: Unknown result type (might be due to invalid IL or missing references)
		//IL_02d4: Expected O, but got Unknown
		//IL_02db: Unknown result type (might be due to invalid IL or missing references)
		//IL_02e7: Unknown result type (might be due to invalid IL or missing references)
		//IL_02f1: Expected O, but got Unknown
		//IL_02f9: Unknown result type (might be due to invalid IL or missing references)
		//IL_0303: Expected O, but got Unknown
		//IL_0310: Unknown result type (might be due to invalid IL or missing references)
		//IL_031a: Expected O, but got Unknown
		//IL_0322: Unknown result type (might be due to invalid IL or missing references)
		//IL_032c: Expected O, but got Unknown
		//IL_0339: Unknown result type (might be due to invalid IL or missing references)
		//IL_0343: Expected O, but got Unknown
		//IL_034b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0355: Expected O, but got Unknown
		//IL_035c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0366: Expected O, but got Unknown
		//IL_036d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0377: Expected O, but got Unknown
		//IL_0384: Unknown result type (might be due to invalid IL or missing references)
		//IL_038e: Expected O, but got Unknown
		//IL_0395: Unknown result type (might be due to invalid IL or missing references)
		//IL_03a1: Unknown result type (might be due to invalid IL or missing references)
		//IL_03ab: Expected O, but got Unknown
		//IL_03b2: Unknown result type (might be due to invalid IL or missing references)
		//IL_03be: Unknown result type (might be due to invalid IL or missing references)
		//IL_03c8: Expected O, but got Unknown
		//IL_03cf: Unknown result type (might be due to invalid IL or missing references)
		//IL_03db: Unknown result type (might be due to invalid IL or missing references)
		//IL_03e5: Expected O, but got Unknown
		//IL_03ec: Unknown result type (might be due to invalid IL or missing references)
		//IL_03f8: Unknown result type (might be due to invalid IL or missing references)
		//IL_0402: Expected O, but got Unknown
		//IL_0409: Unknown result type (might be due to invalid IL or missing references)
		//IL_0415: Unknown result type (might be due to invalid IL or missing references)
		//IL_041f: Expected O, but got Unknown
		//IL_0427: Unknown result type (might be due to invalid IL or missing references)
		//IL_0431: Expected O, but got Unknown
		//IL_0438: Unknown result type (might be due to invalid IL or missing references)
		//IL_0442: Expected O, but got Unknown
		//IL_0448: Unknown result type (might be due to invalid IL or missing references)
		//IL_0454: Unknown result type (might be due to invalid IL or missing references)
		//IL_045e: Expected O, but got Unknown
		//IL_0465: Unknown result type (might be due to invalid IL or missing references)
		//IL_0471: Unknown result type (might be due to invalid IL or missing references)
		//IL_047b: Expected O, but got Unknown
		//IL_0482: Unknown result type (might be due to invalid IL or missing references)
		//IL_048e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0498: Expected O, but got Unknown
		//IL_04a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_04aa: Expected O, but got Unknown
		//IL_04b1: Unknown result type (might be due to invalid IL or missing references)
		//IL_04bb: Expected O, but got Unknown
		//IL_04c1: Unknown result type (might be due to invalid IL or missing references)
		//IL_04cd: Unknown result type (might be due to invalid IL or missing references)
		//IL_04d7: Expected O, but got Unknown
		//IL_04de: Unknown result type (might be due to invalid IL or missing references)
		//IL_04ea: Unknown result type (might be due to invalid IL or missing references)
		//IL_04f4: Expected O, but got Unknown
		//IL_04fc: Unknown result type (might be due to invalid IL or missing references)
		//IL_0506: Expected O, but got Unknown
		//IL_050c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0518: Unknown result type (might be due to invalid IL or missing references)
		//IL_0522: Expected O, but got Unknown
		//IL_0529: Unknown result type (might be due to invalid IL or missing references)
		//IL_0535: Unknown result type (might be due to invalid IL or missing references)
		//IL_053f: Expected O, but got Unknown
		//IL_0547: Unknown result type (might be due to invalid IL or missing references)
		//IL_0551: Expected O, but got Unknown
		//IL_0557: Unknown result type (might be due to invalid IL or missing references)
		//IL_0563: Unknown result type (might be due to invalid IL or missing references)
		//IL_056d: Expected O, but got Unknown
		//IL_0574: Unknown result type (might be due to invalid IL or missing references)
		//IL_0580: Unknown result type (might be due to invalid IL or missing references)
		//IL_058a: Expected O, but got Unknown
		//IL_0591: Unknown result type (might be due to invalid IL or missing references)
		//IL_059d: Unknown result type (might be due to invalid IL or missing references)
		//IL_05a7: Expected O, but got Unknown
		//IL_05ae: Unknown result type (might be due to invalid IL or missing references)
		//IL_05ba: Unknown result type (might be due to invalid IL or missing references)
		//IL_05c4: Expected O, but got Unknown
		//IL_05cb: Unknown result type (might be due to invalid IL or missing references)
		//IL_05d7: Unknown result type (might be due to invalid IL or missing references)
		//IL_05e1: Expected O, but got Unknown
		//IL_05e8: Unknown result type (might be due to invalid IL or missing references)
		//IL_05f4: Unknown result type (might be due to invalid IL or missing references)
		//IL_05fe: Expected O, but got Unknown
		//IL_0606: Unknown result type (might be due to invalid IL or missing references)
		//IL_0610: Expected O, but got Unknown
		//IL_0616: Unknown result type (might be due to invalid IL or missing references)
		//IL_0622: Unknown result type (might be due to invalid IL or missing references)
		//IL_062c: Expected O, but got Unknown
		//IL_0633: Unknown result type (might be due to invalid IL or missing references)
		//IL_063f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0649: Expected O, but got Unknown
		//IL_0650: Unknown result type (might be due to invalid IL or missing references)
		//IL_065c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0666: Expected O, but got Unknown
		//IL_066e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0678: Expected O, but got Unknown
		//IL_067f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0689: Expected O, but got Unknown
		//IL_068f: Unknown result type (might be due to invalid IL or missing references)
		//IL_069b: Unknown result type (might be due to invalid IL or missing references)
		//IL_06a5: Expected O, but got Unknown
		//IL_06ac: Unknown result type (might be due to invalid IL or missing references)
		//IL_06b8: Unknown result type (might be due to invalid IL or missing references)
		//IL_06c2: Expected O, but got Unknown
		//IL_06c9: Unknown result type (might be due to invalid IL or missing references)
		//IL_06d5: Unknown result type (might be due to invalid IL or missing references)
		//IL_06df: Expected O, but got Unknown
		//IL_06e6: Unknown result type (might be due to invalid IL or missing references)
		//IL_06f2: Unknown result type (might be due to invalid IL or missing references)
		//IL_06fc: Expected O, but got Unknown
		//IL_0703: Unknown result type (might be due to invalid IL or missing references)
		//IL_070f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0719: Expected O, but got Unknown
		//IL_0720: Unknown result type (might be due to invalid IL or missing references)
		//IL_072c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0736: Expected O, but got Unknown
		//IL_073e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0748: Expected O, but got Unknown
		//IL_074c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0756: Expected O, but got Unknown
		//IL_0763: Unknown result type (might be due to invalid IL or missing references)
		//IL_076d: Expected O, but got Unknown
		//IL_077b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0785: Expected O, but got Unknown
		//IL_0789: Unknown result type (might be due to invalid IL or missing references)
		//IL_0795: Unknown result type (might be due to invalid IL or missing references)
		//IL_079f: Expected O, but got Unknown
		//IL_07a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_07af: Unknown result type (might be due to invalid IL or missing references)
		//IL_07b9: Expected O, but got Unknown
		switch (connectionId)
		{
		case 1:
			UptimeLabel = (TextBlock)target;
			break;
		case 2:
			NavDashboard = (RadioButton)target;
			((ToggleButton)NavDashboard).Checked += new RoutedEventHandler(Nav_Checked);
			break;
		case 3:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(Nav_Checked);
			break;
		case 4:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(Nav_Checked);
			break;
		case 5:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(Nav_Checked);
			break;
		case 6:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(Nav_Checked);
			break;
		case 7:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(Nav_Checked);
			break;
		case 8:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(Nav_Checked);
			break;
		case 9:
			PanelDashboard = (Grid)target;
			break;
		case 10:
			listBoxLog = (ListBox)target;
			break;
		case 11:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(ResetPlayerBTN_Click);
			break;
		case 12:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(buttonCopy_Click);
			break;
		case 13:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(buttonClear_Click);
			break;
		case 14:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(ExportLogs_Click);
			break;
		case 15:
			PanelPlayers = (Grid)target;
			break;
		case 16:
			PlayerSearchBox = (TextBox)target;
			((TextBoxBase)PlayerSearchBox).TextChanged += new TextChangedEventHandler(PlayerSearch_TextChanged);
			break;
		case 17:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(RefreshPlayers_Click);
			break;
		case 18:
			BulkKickBtn = (Button)target;
			((ButtonBase)BulkKickBtn).Click += new RoutedEventHandler(BulkKick_Click);
			break;
		case 19:
			BulkBanBtn = (Button)target;
			((ButtonBase)BulkBanBtn).Click += new RoutedEventHandler(BulkBan_Click);
			break;
		case 20:
			PlayersGrid = (DataGrid)target;
			break;
		case 25:
			PanelLookup = (Grid)target;
			break;
		case 26:
			LookupSearchBox = (TextBox)target;
			((UIElement)LookupSearchBox).KeyDown += new KeyEventHandler(LookupSearch_KeyDown);
			break;
		case 27:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(LookupSearch_Click);
			break;
		case 28:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(LookupKick_Click);
			break;
		case 29:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(LookupBan_Click);
			break;
		case 30:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(LookupUnban_Click);
			break;
		case 31:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(LookupMacBan_Click);
			break;
		case 32:
			VipLevelBox = (TextBox)target;
			break;
		case 33:
			VipDaysBox = (TextBox)target;
			break;
		case 34:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(GrantVip_Click);
			break;
		case 35:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(ExtendVip_Click);
			break;
		case 36:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(RevokeVip_Click);
			break;
		case 37:
			PanelSecurity = (Grid)target;
			break;
		case 38:
			ManualIpBanBox = (TextBox)target;
			break;
		case 39:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(ManualIpBan_Click);
			break;
		case 40:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(RefreshBruteForce_Click);
			break;
		case 42:
			ManualMacBanBox = (TextBox)target;
			break;
		case 43:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(ManualMacBan_Click);
			break;
		case 44:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(RefreshMacBans_Click);
			break;
		case 46:
			PanelLogs = (Grid)target;
			break;
		case 47:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(LogFilter_Changed);
			break;
		case 48:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(LogFilter_Changed);
			break;
		case 49:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(LogFilter_Changed);
			break;
		case 50:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(LogFilter_Changed);
			break;
		case 51:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(LogFilter_Changed);
			break;
		case 52:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(LogFilter_Changed);
			break;
		case 53:
			AutoScrollToggle = (CheckBox)target;
			break;
		case 54:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(ExportLogs_Click);
			break;
		case 55:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(buttonCopy_Click);
			break;
		case 56:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(buttonClear_Click);
			break;
		case 57:
			listBoxLogFull = (ListBox)target;
			break;
		case 58:
			PanelAudit = (Grid)target;
			break;
		case 59:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(AuditFilter_Changed);
			break;
		case 60:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(AuditFilter_Changed);
			break;
		case 61:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(AuditFilter_Changed);
			break;
		case 62:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(AuditFilter_Changed);
			break;
		case 63:
			((ToggleButton)(RadioButton)target).Checked += new RoutedEventHandler(AuditFilter_Changed);
			break;
		case 64:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(RefreshAudit_Click);
			break;
		case 65:
			PanelSettings = (Grid)target;
			break;
		case 66:
			GmOnlyToggle = (CheckBox)target;
			((ToggleButton)GmOnlyToggle).Checked += new RoutedEventHandler(GmOnly_Changed);
			((ToggleButton)GmOnlyToggle).Unchecked += new RoutedEventHandler(GmOnly_Changed);
			break;
		case 67:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(ReloadConfig_Click);
			break;
		case 68:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(SaveConfig_Click);
			break;
		default:
			_contentLoaded = true;
			break;
		}
	}

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "9.0.11.0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	void IStyleConnector.Connect(int connectionId, object target)
	{
		//IL_0035: Unknown result type (might be due to invalid IL or missing references)
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		//IL_004b: Expected O, but got Unknown
		//IL_0052: Unknown result type (might be due to invalid IL or missing references)
		//IL_005e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0068: Expected O, but got Unknown
		//IL_006c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0078: Unknown result type (might be due to invalid IL or missing references)
		//IL_0082: Expected O, but got Unknown
		//IL_0086: Unknown result type (might be due to invalid IL or missing references)
		//IL_0092: Unknown result type (might be due to invalid IL or missing references)
		//IL_009c: Expected O, but got Unknown
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ac: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b6: Expected O, but got Unknown
		//IL_00ba: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d0: Expected O, but got Unknown
		switch (connectionId)
		{
		case 21:
			((ButtonBase)(CheckBox)target).Click += new RoutedEventHandler(PlayerCheckbox_Click);
			break;
		case 22:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(KickButton_Click);
			break;
		case 23:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(BanButton_Click);
			break;
		case 24:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(MacBanButton_Click);
			break;
		case 41:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(UnbanIP_Click);
			break;
		case 45:
			((ButtonBase)(Button)target).Click += new RoutedEventHandler(UnbanMAC_Click);
			break;
		}
	}
}
