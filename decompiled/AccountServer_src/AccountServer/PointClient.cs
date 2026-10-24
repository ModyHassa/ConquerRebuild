namespace AccountServer;

public class PointClient
{
	private static int pointCounter = 1;

	public ClientObject<PointClient, PointCipher> Network { get; private set; }

	public int PointId { get; private set; }

	public string Username { get; set; }

	public string Password { get; set; }

	public string Server { get; set; }

	public string IPAddress { get; set; }

	public uint Port { get; set; }

	public PointClient(ClientObject<PointClient, PointCipher> network)
	{
		Network = network;
		PointId = pointCounter++;
		Username = string.Empty;
		Password = string.Empty;
		Server = string.Empty;
		IPAddress = string.Empty;
	}
}
