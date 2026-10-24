using System.Text;

namespace AccountServer;

internal class PlayerOnlineHandler
{
	private static PlayerOnlineHandler _handler;

	public static PlayerOnlineHandler Instance
	{
		get
		{
			if (_handler == null)
			{
				_handler = new PlayerOnlineHandler();
			}
			return _handler;
		}
	}

	public void SetPlayerOnline(int AccountId)
	{
		UpdateStatus(AccountId, Online: true);
	}

	public void SetPlayerOffline(int AccountId)
	{
		UpdateStatus(AccountId, Online: false);
	}

	public void SetAllOffline()
	{
		StringBuilder stringBuilder = new StringBuilder();
		stringBuilder.Append("UPDATE `accounts` SET ");
		stringBuilder.Append("online_eu = 0, ");
		stringBuilder.Append("online_us = 0");
		Database.ExecuteSql(stringBuilder.ToString(), Database.AuthConnectionString);
	}

	private void UpdateStatus(int AccountId, bool Online)
	{
		StringBuilder stringBuilder = new StringBuilder();
		stringBuilder.Append("UPDATE `accounts` SET ");
		stringBuilder.Append($"{World.OnlineColumn} = {(Online ? 1 : 0)} ");
		stringBuilder.Append($"WHERE id = {AccountId} LIMIT 1");
		Database.ExecuteSql(stringBuilder.ToString(), Database.AuthConnectionString);
	}
}
