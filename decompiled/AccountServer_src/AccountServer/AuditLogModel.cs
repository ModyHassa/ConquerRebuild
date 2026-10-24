namespace AccountServer;

public class AuditLogModel
{
	public string Action { get; set; }

	public int TargetAccountId { get; set; }

	public string TargetInfo { get; set; }

	public string Details { get; set; }

	public string PerformedAt { get; set; }
}
