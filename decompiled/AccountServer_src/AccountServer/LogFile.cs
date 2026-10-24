using System;
using System.Collections.Concurrent;
using System.IO;
using System.Linq;

namespace AccountServer;

public class LogFile
{
	private static ConcurrentBag<string> OutPurgeQueue;

	private static ConcurrentBag<string> InPurgeQueue;

	private static uint LastPurge;

	private static uint LastGarbage;

	static LogFile()
	{
		OutPurgeQueue = new ConcurrentBag<string>();
		InPurgeQueue = new ConcurrentBag<string>();
		LastPurge = 0u;
		LastGarbage = 0u;
		if (!Directory.Exists(Environment.CurrentDirectory + "\\DebugLog\\"))
		{
			Directory.CreateDirectory(Environment.CurrentDirectory + "\\DebugLog\\");
		}
		if (!Directory.Exists(Environment.CurrentDirectory + "\\InLogs\\"))
		{
			Directory.CreateDirectory(Environment.CurrentDirectory + "\\InLogs\\");
		}
		if (!Directory.Exists(Environment.CurrentDirectory + "\\OutLogs\\"))
		{
			Directory.CreateDirectory(Environment.CurrentDirectory + "\\OutLogs\\");
		}
		if (!Directory.Exists(Environment.CurrentDirectory + "\\ExtensiveLog\\"))
		{
			Directory.CreateDirectory(Environment.CurrentDirectory + "\\ExtensiveLog\\");
		}
	}

	private static string GenerateInLogFilePath()
	{
		return $"{Environment.CurrentDirectory}\\InLogs\\{DateTime.Now.ToLongDateString()}.txt";
	}

	private static string GenerateOutLogFilePath()
	{
		return $"{Environment.CurrentDirectory}\\OutLogs\\{DateTime.Now.ToLongDateString()}.txt";
	}

	public static void Purge()
	{
		if (TimeStamp.GetTime() > LastPurge + 5000)
		{
			lock (InPurgeQueue)
			{
				string[] array = InPurgeQueue.Reverse().ToArray();
				using (StreamWriter streamWriter = new StreamWriter(GenerateInLogFilePath(), append: true))
				{
					string[] array2 = array;
					foreach (string value in array2)
					{
						streamWriter.WriteLine(value);
					}
					streamWriter.Flush();
				}
				InPurgeQueue = new ConcurrentBag<string>();
			}
			lock (OutPurgeQueue)
			{
				string[] array3 = OutPurgeQueue.Reverse().ToArray();
				using (StreamWriter streamWriter2 = new StreamWriter(GenerateOutLogFilePath(), append: true))
				{
					string[] array4 = array3;
					foreach (string value2 in array4)
					{
						streamWriter2.WriteLine(value2);
					}
					streamWriter2.Flush();
				}
				OutPurgeQueue = new ConcurrentBag<string>();
			}
			LastPurge = TimeStamp.GetTime();
		}
		if (TimeStamp.GetTime() > LastGarbage + 60000)
		{
			GC.Collect();
			LastGarbage = TimeStamp.GetTime();
		}
	}

	public static void AddInFileLog(string Line, params object[] args)
	{
		string arg = string.Format(Line, args);
		InPurgeQueue.Add($"[{DateTime.Now.ToLongTimeString()}] {arg}");
	}

	public static void AddOutFileLog(string Line, params object[] args)
	{
		string arg = string.Format(Line, args);
		OutPurgeQueue.Add($"[{DateTime.Now.ToLongTimeString()}] {arg}");
	}
}
