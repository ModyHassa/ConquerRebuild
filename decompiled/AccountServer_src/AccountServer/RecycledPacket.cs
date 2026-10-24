using System;

namespace AccountServer;

public class RecycledPacket : IDisposable
{
	private Packet stream;

	public Packet GetStream()
	{
		return stream;
	}

	public RecycledPacket()
	{
		stream = PacketRecycle.Take();
	}

	~RecycledPacket()
	{
		Dispose();
	}

	public void Dispose()
	{
		if (stream != null)
		{
			PacketRecycle.Reuse(stream);
			stream = null;
			GC.SuppressFinalize(this);
		}
	}
}
