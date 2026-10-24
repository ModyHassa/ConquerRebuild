namespace AccountServer;

public class BannedIPModel
{
	public string IP { get; set; }

	public string BannedAt { get; set; }

	public string ExpiresAt { get; set; }

	public bool IsPermanent { get; set; }
}
