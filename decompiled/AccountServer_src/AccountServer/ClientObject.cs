using System;
using System.Collections.Concurrent;
using System.Net.Sockets;

namespace AccountServer;

public class ClientObject<T, TCipher> where TCipher : ICipher, new()
{
	public T Wrapper;

	public ConcurrentQueue<byte[]> SendQueue;

	private ConcurrentQueue<Packet> RecvQueue;

	private Packet RecvResult;

	private int RecvSize;

	private int RecvLeft;

	private int RecvOffset;

	public ServerSocket<T, TCipher> Owner { get; private set; }

	public Socket Connection { get; private set; }

	public bool Alive { get; internal set; }

	public string KickReason { get; internal set; }

	public ICipher Language { get; private set; }

	public byte[] Buffer { get; private set; }

	public string RemoteIP()
	{
		string[] array = Connection.RemoteEndPoint.ToString().Split(':');
		if (array.Length == 2)
		{
			return array[0];
		}
		return string.Empty;
	}

	public bool NextReceiveCandidate(out Packet next)
	{
		return RecvQueue.TryDequeue(out next);
	}

	public bool NextSendCandidate(out byte[] next)
	{
		return SendQueue.TryDequeue(out next);
	}

	public unsafe void Send(Packet message)
	{
		byte[] array = new byte[message.Size];
		Language.Encrypt(message.Memory, 0, array, 0, message.Size);
		SendQueue.Enqueue(array);
	}

	public unsafe bool BlockSend(Packet message)
	{
		byte[] array = new byte[message.Size];
		Language.Encrypt(message.Memory, 0, array, 0, message.Size);
		try
		{
			Connection.Send(array);
			return true;
		}
		catch (Exception ex)
		{
			Kick("BlockSend", ex);
			return false;
		}
	}

	public void DirectSend(byte[] message)
	{
		try
		{
			Connection.BeginSend(message, 0, message.Length, SocketFlags.None, delegate(IAsyncResult result)
			{
				try
				{
					int num = Connection.EndSend(result);
				}
				catch (Exception ex)
				{
					Kick("DirectSend", ex);
				}
			}, null);
		}
		catch (Exception ex2)
		{
			Kick("DirectSend", ex2);
		}
	}

	internal ClientObject(ServerSocket<T, TCipher> _Owner, Socket _Connection)
	{
		Owner = _Owner;
		Connection = _Connection;
		Language = new TCipher();
		Alive = true;
		Buffer = new byte[512];
		RecvQueue = new ConcurrentQueue<Packet>();
		SendQueue = new ConcurrentQueue<byte[]>();
		Connection.ReceiveBufferSize = 65535;
		Connection.SendBufferSize = 65535;
	}

	public void Kick(string reason)
	{
		Owner.Kick(this, reason);
	}

	public void Kick(string where, Exception ex)
	{
		Kick(where + " -- " + ex.ToString());
	}

	public void Receive()
	{
		RecvLeft = 2;
		RecvOffset = 0;
		RecvResult = PacketRecycle.Take();
		RecvResult.Seek(0);
		Connection.BeginReceive(Buffer, 0, RecvLeft, SocketFlags.None, ReceiveHeader, null);
	}

	private unsafe void ReceiveBody(IAsyncResult res)
	{
		try
		{
			int num = Connection.EndReceive(res);
			RecvLeft -= num;
			RecvOffset += num;
			if (num == 0)
			{
				Kick("ReceiveBody() -- graceful disconnect");
				return;
			}
			if (RecvLeft > 0)
			{
				Connection.BeginReceive(Buffer, RecvOffset, RecvLeft, SocketFlags.None, ReceiveBody, null);
				return;
			}
			Language.Decrypt(Buffer, 0, RecvResult.Stream, 0, RecvSize - 2);
			RecvQueue.Enqueue(RecvResult);
			Receive();
		}
		catch (Exception ex)
		{
			Kick("ReceiveBody", ex);
		}
	}

	private unsafe void ReceiveHeader(IAsyncResult res)
	{
		try
		{
			int num = Connection.EndReceive(res);
			RecvLeft -= num;
			RecvOffset += num;
			if (num == 0)
			{
				Kick("ReceiveHeader() -- graceful disconnect");
			}
			else if (RecvLeft == 0)
			{
				Language.Decrypt(Buffer, 0, RecvResult.Stream, 0, 2);
				RecvSize = RecvResult.ReadUInt16();
				RecvResult.Size = RecvSize;
				RecvLeft = RecvSize - 2;
				if (RecvLeft > 1024)
				{
					Kick("ReceiveHeader() -- header too large!");
					return;
				}
				RecvOffset = 0;
				Connection.BeginReceive(Buffer, RecvOffset, RecvLeft, SocketFlags.None, ReceiveBody, null);
			}
			else
			{
				Connection.BeginReceive(Buffer, RecvOffset, RecvLeft, SocketFlags.None, ReceiveHeader, null);
			}
		}
		catch (Exception ex)
		{
			Kick("ReceiveHeader", ex);
		}
	}
}
