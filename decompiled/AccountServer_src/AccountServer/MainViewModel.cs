using System;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Windows;
using System.Windows.Threading;

namespace AccountServer;

public class MainViewModel : INotifyPropertyChanged
{
	private int _playerCount;

	private int _serverCount;

	private int _failedLogins;

	private int _bruteForceCount;

	private int _macBanCount;

	private int _activeBruteForceAttempts;

	private string _gmOnlyStatus = "Disabled";

	private string _activeLogFilter = "All";

	private string _playerSearchText = "";

	private string _activeAuditFilter = "All";

	private AccountProfileModel _lookupProfile = new AccountProfileModel();

	public ObservableCollection<string> LogMessages { get; set; } = new ObservableCollection<string>();

	public ObservableCollection<AccountModel> OnlinePlayers { get; set; } = new ObservableCollection<AccountModel>();

	public ObservableCollection<AccountModel> FilteredPlayers { get; set; } = new ObservableCollection<AccountModel>();

	public ObservableCollection<string> FilteredLogs { get; set; } = new ObservableCollection<string>();

	public ObservableCollection<BannedIPModel> BannedIPs { get; set; } = new ObservableCollection<BannedIPModel>();

	public ObservableCollection<BannedMACModel> BannedMACs { get; set; } = new ObservableCollection<BannedMACModel>();

	public ObservableCollection<ServerInfoModel> ConnectedServers { get; set; } = new ObservableCollection<ServerInfoModel>();

	public ObservableCollection<RelatedAccountModel> RelatedAccounts { get; set; } = new ObservableCollection<RelatedAccountModel>();

	public ObservableCollection<LoginHistoryModel> LoginHistory { get; set; } = new ObservableCollection<LoginHistoryModel>();

	public ObservableCollection<AuditLogModel> AuditLogs { get; set; } = new ObservableCollection<AuditLogModel>();

	public ObservableCollection<AuditLogModel> FilteredAuditLogs { get; set; } = new ObservableCollection<AuditLogModel>();

	public ObservableCollection<PlayerSnapshotModel> PlayerSnapshots { get; set; } = new ObservableCollection<PlayerSnapshotModel>();

	public ObservableCollection<ConfigEntryModel> ConfigEntries { get; set; } = new ObservableCollection<ConfigEntryModel>();

	public int PlayerCount
	{
		get
		{
			return _playerCount;
		}
		set
		{
			_playerCount = value;
			OnPropertyChanged("PlayerCount");
		}
	}

	public int ServerCount
	{
		get
		{
			return _serverCount;
		}
		set
		{
			_serverCount = value;
			OnPropertyChanged("ServerCount");
		}
	}

	public int FailedLogins
	{
		get
		{
			return _failedLogins;
		}
		set
		{
			_failedLogins = value;
			OnPropertyChanged("FailedLogins");
		}
	}

	public int BruteForceCount
	{
		get
		{
			return _bruteForceCount;
		}
		set
		{
			_bruteForceCount = value;
			OnPropertyChanged("BruteForceCount");
		}
	}

	public int MacBanCount
	{
		get
		{
			return _macBanCount;
		}
		set
		{
			_macBanCount = value;
			OnPropertyChanged("MacBanCount");
		}
	}

	public int ActiveBruteForceAttempts
	{
		get
		{
			return _activeBruteForceAttempts;
		}
		set
		{
			_activeBruteForceAttempts = value;
			OnPropertyChanged("ActiveBruteForceAttempts");
		}
	}

	public string GmOnlyStatus
	{
		get
		{
			return _gmOnlyStatus;
		}
		set
		{
			_gmOnlyStatus = value;
			OnPropertyChanged("GmOnlyStatus");
		}
	}

	public AccountProfileModel LookupProfile
	{
		get
		{
			return _lookupProfile;
		}
		set
		{
			_lookupProfile = value;
			OnPropertyChanged("LookupProfile");
			OnPropertyChanged("LookupVisible");
		}
	}

	public Visibility LookupVisible
	{
		get
		{
			AccountProfileModel lookupProfile = LookupProfile;
			return (Visibility)((lookupProfile == null || !lookupProfile.HasProfile) ? 2 : 0);
		}
	}

	public Visibility NoServersVisible => (Visibility)((ConnectedServers.Count != 0) ? 2 : 0);

	public string ActiveLogFilter
	{
		get
		{
			return _activeLogFilter;
		}
		set
		{
			_activeLogFilter = value;
			OnPropertyChanged("ActiveLogFilter");
			RefreshFilteredLogs();
		}
	}

	public string PlayerSearchText
	{
		get
		{
			return _playerSearchText;
		}
		set
		{
			_playerSearchText = value;
			OnPropertyChanged("PlayerSearchText");
			RefreshFilteredPlayers();
		}
	}

	public string ActiveAuditFilter
	{
		get
		{
			return _activeAuditFilter;
		}
		set
		{
			_activeAuditFilter = value;
			OnPropertyChanged("ActiveAuditFilter");
			RefreshFilteredAudit();
		}
	}

	public int SelectedPlayerCount => FilteredPlayers.Count((AccountModel p) => p.IsSelected);

	public event PropertyChangedEventHandler PropertyChanged;

	public void NotifySelectionChanged()
	{
		OnPropertyChanged("SelectedPlayerCount");
	}

	public void RefreshFilteredPlayers()
	{
		((DispatcherObject)Application.Current).Dispatcher.Invoke((Action)delegate
		{
			FilteredPlayers.Clear();
			string value = (PlayerSearchText ?? "").Trim().ToLowerInvariant();
			foreach (AccountModel onlinePlayer in OnlinePlayers)
			{
				if (!string.IsNullOrEmpty(value))
				{
					string characterName = onlinePlayer.CharacterName;
					if ((characterName == null || !characterName.ToLowerInvariant().Contains(value)) && !onlinePlayer.Id.ToString().Contains(value))
					{
						continue;
					}
				}
				FilteredPlayers.Add(onlinePlayer);
			}
		});
	}

	public void RefreshFilteredLogs()
	{
		((DispatcherObject)Application.Current).Dispatcher.Invoke((Action)delegate
		{
			FilteredLogs.Clear();
			string text = ActiveLogFilter ?? "All";
			foreach (string logMessage in LogMessages)
			{
				if (text == "All" || MatchesLogFilter(logMessage, text))
				{
					FilteredLogs.Add(logMessage);
				}
			}
		});
	}

	public void RefreshFilteredAudit()
	{
		((DispatcherObject)Application.Current).Dispatcher.Invoke((Action)delegate
		{
			FilteredAuditLogs.Clear();
			string text = ActiveAuditFilter ?? "All";
			foreach (AuditLogModel auditLog in AuditLogs)
			{
				if (text == "All" || auditLog.Action.Contains(text, StringComparison.OrdinalIgnoreCase))
				{
					FilteredAuditLogs.Add(auditLog);
				}
			}
		});
	}

	private bool MatchesLogFilter(string log, string filter)
	{
		string text = log.ToUpperInvariant();
		if (1 == 0)
		{
		}
		bool result = filter switch
		{
			"Auth" => text.Contains("AUTH:"), 
			"Session" => text.Contains("SESSION:"), 
			"Security" => text.Contains("SECURITY:"), 
			"System" => text.Contains("SYSTEM:") || text.Contains("ACCOUNT SERVER"), 
			"VIP" => text.Contains("VIP"), 
			_ => true, 
		};
		if (1 == 0)
		{
		}
		return result;
	}

	public void AddLogMessage(string message)
	{
		((DispatcherObject)Application.Current).Dispatcher.Invoke((Action)delegate
		{
			LogMessages.Add(message);
			while (LogMessages.Count > 5000)
			{
				LogMessages.RemoveAt(0);
			}
			string text = ActiveLogFilter ?? "All";
			if (text == "All" || MatchesLogFilter(message, text))
			{
				FilteredLogs.Add(message);
				while (FilteredLogs.Count > 5000)
				{
					FilteredLogs.RemoveAt(0);
				}
			}
		});
	}

	public void OnPropertyChanged(string name)
	{
		this.PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(name));
	}
}
