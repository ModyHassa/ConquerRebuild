using System.Text.RegularExpressions;

namespace AccountServer;

public class MsgMacAddr
{
	private const string regex = "(.{2})(.{2})(.{2})(.{2})(.{2})(.{2})";

	private const string replace = "$1:$2:$3:$4:$5:$6";

	public const ushort cType = 1100;

	public ushort Size { get; set; }

	public ushort Type { get; set; }

	public int AccountId { get; set; }

	public string MacAddr { get; set; }

	public MsgMacAddr(Packet msg)
	{
		msg.Seek(0);
		Size = msg.ReadUInt16();
		Type = msg.ReadUInt16();
		AccountId = msg.ReadInt32();
		MacAddr = msg.ReadCString(12);
		MacAddr = Regex.Replace(MacAddr, "(.{2})(.{2})(.{2})(.{2})(.{2})(.{2})", "$1:$2:$3:$4:$5:$6");
	}

	public void Process(AuthClient Client)
	{
		GameServer value = null;
		if (World.Servers.TryGetValue(Client.Server.GenerateHash(), out value) && (string.IsNullOrEmpty(MacAddr) || Client.AccountId != AccountId))
		{
			value.Kickout(Client.AccountId);
		}
		Client.MacAddress = MacAddr;
		if (Database.BannedMac(Client))
		{
			value.Kickout(Client.AccountId);
		}
		Database.UpdateAccount(Client);
	}
}
