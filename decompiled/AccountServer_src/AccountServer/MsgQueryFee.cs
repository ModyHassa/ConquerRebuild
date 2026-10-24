namespace AccountServer;

public class MsgQueryFee
{
	public const ushort cType = 1201;

	public ushort Size { get; private set; }

	public ushort Type { get; private set; }

	public int AccountId { get; private set; }

	public uint dwData { get; private set; }

	public uint Time { get; private set; }

	public MsgQueryFeeType SubType { get; private set; }

	public MsgQueryFee(Packet msg)
	{
		msg.Seek(0);
		Size = msg.ReadUInt16();
		Type = msg.ReadUInt16();
		AccountId = msg.ReadInt32();
		dwData = msg.ReadUInt32();
		Time = msg.ReadUInt32();
		SubType = (MsgQueryFeeType)msg.ReadUInt8();
	}

	public MsgQueryFee(int _AccountId, uint _dwData, uint _Time, MsgQueryFeeType _MsgQueryFeeType)
	{
		Size = 32;
		Type = 1201;
		AccountId = _AccountId;
		dwData = _dwData;
		Time = _Time;
		SubType = _MsgQueryFeeType;
	}

	public void ToBytes(Packet msg)
	{
		msg.InitWriter();
		msg.Write(AccountId);
		msg.Write(dwData);
		msg.Write(Time);
		msg.Write((uint)SubType);
		msg.Finalize(1201);
	}

	public void Process(PointClient Client)
	{
	}
}
