using System;
using System.ComponentModel;

namespace AccountServer;

public class AccountModel : INotifyPropertyChanged
{
	private bool _isSelected;

	public int Id { get; set; }

	public string Username { get; set; }

	public string CharacterName { get; set; }

	public int VipLevel { get; set; }

	public DateTime? ExpirationDate { get; set; }

	public string TimeRemaining { get; set; }

	public bool IsVip => VipLevel > 0 && ExpirationDate.HasValue && ExpirationDate.Value > DateTime.Now;

	public bool IsSelected
	{
		get
		{
			return _isSelected;
		}
		set
		{
			_isSelected = value;
			OnPropertyChanged("IsSelected");
		}
	}

	public event PropertyChangedEventHandler PropertyChanged;

	public void OnPropertyChanged(string name)
	{
		this.PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(name));
	}
}
