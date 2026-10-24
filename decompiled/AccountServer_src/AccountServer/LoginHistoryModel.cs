using System.Windows.Media;

namespace AccountServer;

public class LoginHistoryModel
{
	public string AccountName { get; set; }

	public string IP { get; set; }

	public string Mac { get; set; }

	public string Result { get; set; }

	public Brush ResultColor => (Brush)((Result == "Success") ? new SolidColorBrush(Color.FromRgb((byte)63, (byte)185, (byte)80)) : new SolidColorBrush(Color.FromRgb((byte)248, (byte)81, (byte)73)));

	public string Reason { get; set; }

	public string AttemptedAt { get; set; }
}
