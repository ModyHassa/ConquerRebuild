using System;
using System.ComponentModel;
using System.Windows.Media;

namespace AccountServer;

public class AccountProfileModel : INotifyPropertyChanged
{
	public int Id { get; set; }

	public string Username { get; set; }

	public string Status { get; set; }

	public Brush StatusColor { get; set; }

	public int AccountType { get; set; }

	public string MacAddress { get; set; }

	public string LastIP { get; set; }

	public int VipLevel { get; set; }

	public DateTime? VipExpires { get; set; }

	public string VipDisplay { get; set; }

	public bool IsOnline { get; set; }

	public bool HasProfile => Id > 0;

	public event PropertyChangedEventHandler PropertyChanged;

	public void OnPropertyChanged(string name)
	{
		this.PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(name));
	}
}
