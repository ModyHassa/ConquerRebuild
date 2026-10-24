using System.Runtime.InteropServices;

namespace AccountServer;

public class TimeStamp
{
	[DllImport("winmm.dll", CallingConvention = CallingConvention.StdCall, EntryPoint = "timeGetTime")]
	public static extern uint GetTime();

	[DllImport("msvcrt.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "_time32")]
	public static extern uint GetUnixTime32(int timer = 0);

	[DllImport("msvcrt.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "_time64")]
	public static extern ulong GetUnixTime64(long timer = 0L);
}
