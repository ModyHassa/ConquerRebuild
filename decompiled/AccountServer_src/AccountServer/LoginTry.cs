using System;

namespace AccountServer;

public class LoginTry
{
	public string IP { get; set; }

	public int AuthTry { get; set; }

	public DateTime TriedAt { get; set; }
}
