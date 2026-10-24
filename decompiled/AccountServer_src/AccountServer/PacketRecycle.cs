using System.Collections.Concurrent;

namespace AccountServer;

public static class PacketRecycle
{
	private static ConcurrentQueue<Packet> bin = new ConcurrentQueue<Packet>();

	public static Packet Take()
	{
		if (!bin.TryDequeue(out Packet result))
		{
			result = new Packet(512);
		}
		result.Seek(4);
		return result;
	}

	public static void Reuse(Packet old)
	{
		old.Seek(0);
		bin.Enqueue(old);
	}
}
