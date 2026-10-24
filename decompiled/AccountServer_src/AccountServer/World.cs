using System;
using System.Collections.Concurrent;
using System.IO;

namespace AccountServer;

public class World
{
	public static ProcessFactory Factory = new ProcessFactory(6);

	public static MainWindow FormInstance;

	public static AuthServer LoginServer;

	public static PointServer PointServer;

	public static bool GMOnly;

	public static int ClientLimit;

	public static string OnlineColumn = "online";

	public static int DefaultVIP = 0;

	public static object ExtensiveLock = new object();

	public static object DebugLock = new object();

	public static ConcurrentDictionary<uint, GameServer> Servers = new ConcurrentDictionary<uint, GameServer>();

	public const int HEARTBEAT_INTERVAL_SECS = 86400;

	public const int HEARTBEAT_KICK_SECS = 86400;

	public const int SERVER_BUSY_DELAY_SECS = 30000;

	public const int SERVER_FULL_DELAY_SECS = 30000;

	public static void DebugWriteLine(string Line, params object[] args)
	{
		try
		{
			if (FormInstance != null)
			{
				string arg = string.Format(Line, args);
				arg = $"[{DateTime.Now.ToLongTimeString()}] {arg}";
				FormInstance.WriteLine(arg);
			}
		}
		catch
		{
		}
	}

	public static void DebugLog(string Line, params object[] args)
	{
		lock (DebugLock)
		{
			try
			{
				string arg = string.Format(Line, args);
				arg = $"[{DateTime.Now.ToLongTimeString()}:{DateTime.Now.Millisecond}] {arg}";
				string text = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "DebugLog");
				if (!Directory.Exists(text))
				{
					Directory.CreateDirectory(text);
				}
				using StreamWriter streamWriter = new StreamWriter(Path.Combine(text, DateTime.Now.ToLongDateString() + ".txt"), append: true);
				streamWriter.WriteLine(arg);
				streamWriter.Flush();
			}
			catch
			{
			}
		}
	}

	public static void ExtensiveLog(string Line, params object[] args)
	{
		lock (ExtensiveLock)
		{
			try
			{
				string arg = string.Format(Line, args);
				arg = $"[{DateTime.Now.ToLongTimeString()}:{DateTime.Now.Millisecond}] {arg}";
				string text = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "ExtensiveLog");
				if (!Directory.Exists(text))
				{
					Directory.CreateDirectory(text);
				}
				using StreamWriter streamWriter = new StreamWriter(Path.Combine(text, DateTime.Now.ToLongDateString() + ".txt"), append: true);
				streamWriter.WriteLine(arg);
				streamWriter.Flush();
			}
			catch
			{
			}
		}
	}
}
