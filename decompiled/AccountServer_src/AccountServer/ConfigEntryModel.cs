using System.ComponentModel;

namespace AccountServer;

public class ConfigEntryModel : INotifyPropertyChanged
{
	private string _value;

	public string Section { get; set; }

	public string Key { get; set; }

	public string Value
	{
		get
		{
			return _value;
		}
		set
		{
			_value = value;
			OnPropertyChanged("Value");
			OnPropertyChanged("IsDirty");
		}
	}

	public string OriginalValue { get; set; }

	public bool IsDirty => Value != OriginalValue;

	public bool IsPassword => Key.ToLowerInvariant().Contains("pass");

	public event PropertyChangedEventHandler PropertyChanged;

	public void OnPropertyChanged(string name)
	{
		this.PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(name));
	}
}
