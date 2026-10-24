using AccountServer.Ciphers;

namespace AccountServer;

public class AuthClient
{
	private static int authCounter = 1;

	public ClientObject<AuthClient, AuthCipher> Network { get; private set; }

	public int AuthId { get; private set; }

	public string Username { get; set; }

	public string Password { get; set; }

	public string Server { get; set; }

	public string PlayerName { get; set; }

	public string MacAddress { get; set; }

	public bool Activated { get; set; }

	public bool ForcePasswordChange { get; set; }

	public SRP6 Srp { get; set; }

	public int AccountId { get; set; }

	public int AccountVip { get; set; }

	public int AccountType { get; set; }

	public AccountStatus AccountStatus { get; set; }

	public int AuthHash => (int)(Username.GenerateHash() + Password.GenerateHash() - Server.GenerateHash());

	public AuthClient(ClientObject<AuthClient, AuthCipher> network)
	{
		Network = network;
		AuthId = authCounter++;
		AccountId = -1;
		AccountStatus = AccountStatus.Normal;
		AccountVip = -1;
		Username = string.Empty;
		Password = string.Empty;
		Server = string.Empty;
		MacAddress = string.Empty;
	}
}
