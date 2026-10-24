using System;
using System.Net;
using System.Net.Sockets;

namespace AccountServer;

public class ServerSocket<T, TCipher> where TCipher : ICipher, new()
{
	private Socket listener;

	public Action<ClientObject<T, TCipher>> OnConnect;

	public Action<ClientObject<T, TCipher>> OnDisconnect;

	public int Port { get; private set; }

	public ServerSocket(int port)
	{
		Port = port;
		listener = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
		listener.Bind(new IPEndPoint(IPAddress.Any, port));
	}

	public void Start(int backlog)
	{
		listener.Listen(backlog);
		Accept();
	}

	public void Kick(ClientObject<T, TCipher> user, string reason)
	{
		if (!user.Alive)
		{
			return;
		}
		user.Alive = false;
		user.KickReason = reason;
		if (OnDisconnect != null)
		{
			OnDisconnect(user);
		}
		try
		{
			user.Connection.Disconnect(reuseSocket: false);
		}
		catch
		{
		}
	}

	private void Accept()
	{
		listener.BeginAccept(AcceptCallback, null);
	}

	private void AcceptCallback(IAsyncResult res)
	{
		try
		{
			ClientObject<T, TCipher> obj = new ClientObject<T, TCipher>(this, listener.EndAccept(res));
			if (OnConnect != null)
			{
				OnConnect(obj);
			}
		}
		catch
		{
		}
		Accept();
	}
}
