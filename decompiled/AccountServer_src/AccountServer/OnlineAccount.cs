namespace AccountServer;

public class OnlineAccount
{
	public int AccountId { get; set; }

	public int AuthenId { get; set; }

	public string Username { get; set; }

	public string Password { get; set; }

	public string RemoteIP { get; set; }

	public string PlayerName { get; set; }

	public string Server { get; set; }

	public OnlineAccount(AuthClient _Client)
	{
		AccountId = _Client.AccountId;
		AuthenId = _Client.AuthHash;
		Username = _Client.Username;
		Password = _Client.Password;
		PlayerName = _Client.PlayerName;
		RemoteIP = _Client.Network.RemoteIP();
		Server = _Client.Server;
	}
}
