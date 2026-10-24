using System.IO;
using System.Runtime.InteropServices;
using System.Text;

namespace AccountServer;

public class IniFile
{
	private string Path;

	[DllImport("kernel32")]
	private static extern int WritePrivateProfileString(string lpAppName, string lpKeyName, string lpString, string lpFileName);

	[DllImport("kernel32")]
	private static extern int GetPrivateProfileString(string lpAppName, string lpKeyName, string lpDefault, StringBuilder lpReturnedString, int nSize, string lpFileName);

	public IniFile(string Path)
	{
		this.Path = Path;
	}

	public bool FileExists()
	{
		return File.Exists(Path);
	}

	public int WriteValue(string Section, string Key, object Value)
	{
		return WritePrivateProfileString(Section, Key, Value.ToString(), Path);
	}

	public ushort ReadUInt16(string Section, string Key)
	{
		StringBuilder stringBuilder = new StringBuilder(1024);
		GetPrivateProfileString(Section, Key, "0", stringBuilder, stringBuilder.Capacity, Path);
		ushort result = 0;
		ushort.TryParse(stringBuilder.ToString(), out result);
		return result;
	}

	public int ReadInt32(string Section, string Key)
	{
		StringBuilder stringBuilder = new StringBuilder(1024);
		GetPrivateProfileString(Section, Key, "0", stringBuilder, stringBuilder.Capacity, Path);
		int result = 0;
		int.TryParse(stringBuilder.ToString(), out result);
		return result;
	}

	public string ReadString(string Section, string Key)
	{
		StringBuilder stringBuilder = new StringBuilder(1024);
		GetPrivateProfileString(Section, Key, "", stringBuilder, stringBuilder.Capacity, Path);
		return stringBuilder.ToString();
	}

	public string ReadValue(string Section, string Key)
	{
		StringBuilder stringBuilder = new StringBuilder(1024);
		GetPrivateProfileString(Section, Key, "0", stringBuilder, stringBuilder.Capacity, Path);
		return stringBuilder.ToString();
	}
}
