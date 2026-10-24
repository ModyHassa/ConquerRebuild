using System.ComponentModel;
using System.Windows.Media;

namespace AccountServer;

public class ServerInfoModel : INotifyPropertyChanged
{
	public string Name { get; set; }

	public string State { get; set; }

	public int PlayerCount { get; set; }

	public Brush StateColor
	{
		get
		{
			//IL_003d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0042: Unknown result type (might be due to invalid IL or missing references)
			//IL_0048: Expected O, but got Unknown
			//IL_0056: Unknown result type (might be due to invalid IL or missing references)
			//IL_005b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0061: Expected O, but got Unknown
			//IL_006c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0071: Unknown result type (might be due to invalid IL or missing references)
			//IL_0077: Expected O, but got Unknown
			//IL_007f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0084: Unknown result type (might be due to invalid IL or missing references)
			//IL_008a: Expected O, but got Unknown
			string state = State;
			if (1 == 0)
			{
			}
			SolidColorBrush result = (SolidColorBrush)(state switch
			{
				"Normal" => (object)new SolidColorBrush(Color.FromRgb((byte)63, (byte)185, (byte)80)), 
				"Busy" => (object)new SolidColorBrush(Color.FromRgb((byte)210, (byte)153, (byte)34)), 
				"Full" => (object)new SolidColorBrush(Color.FromRgb((byte)248, (byte)81, (byte)73)), 
				_ => (object)new SolidColorBrush(Color.FromRgb((byte)84, (byte)93, (byte)104)), 
			});
			if (1 == 0)
			{
			}
			return (Brush)(object)result;
		}
	}

	public event PropertyChangedEventHandler PropertyChanged;

	public void OnPropertyChanged(string name)
	{
		this.PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(name));
	}
}
