using System;
using System.Runtime.InteropServices;
using System.Text;

namespace AccountServer;

public class Packet : IDisposable
{
	public const int MAX_SIZE = 512;

	public static int Padding;

	private unsafe byte* stream;

	public int Size { get; set; }

	public unsafe byte* Memory { get; private set; }

	public unsafe bool IsDisposed => Memory == null;

	public unsafe int Position => (int)(stream - Memory);

	public unsafe byte* Stream => stream;

	[DllImport("msvcrt.dll", CallingConvention = CallingConvention.Cdecl)]
	private unsafe static extern void* memcpy(void* dst, void* src, int num);

	[DllImport("msvcrt.dll", CallingConvention = CallingConvention.Cdecl)]
	private unsafe static extern void* memset(void* dst, int val, int count);

	public unsafe Packet(int size)
	{
		Memory = (byte*)Marshal.AllocHGlobal(size);
		stream = Memory;
	}

	~Packet()
	{
		Dispose();
	}

	public unsafe void Dispose()
	{
		if (!IsDisposed)
		{
			Marshal.FreeHGlobal((nint)Memory);
			Memory = null;
			GC.SuppressFinalize(this);
		}
	}

	public void InitWriter()
	{
		Seek(4);
	}

	public unsafe void Seek(int offset)
	{
		stream = Memory + offset;
	}

	public void SeekForward(int amount)
	{
		Seek(Position + amount);
	}

	public void SeekBackwards(int amount)
	{
		Seek(Position - amount);
	}

	public unsafe void Write(byte value)
	{
		*stream = value;
		stream++;
	}

	public unsafe void Write(ushort value)
	{
		*(ushort*)stream = value;
		stream += 2;
	}

	public unsafe void Write(uint value)
	{
		*(uint*)stream = value;
		stream += 4;
	}

	public unsafe void Write(ulong value)
	{
		*(ulong*)stream = value;
		stream += 8;
	}

	public void Write(sbyte value)
	{
		Write((byte)value);
	}

	public void Write(short value)
	{
		Write((ushort)value);
	}

	public void Write(int value)
	{
		Write((uint)value);
	}

	public void Write(long value)
	{
		Write((ulong)value);
	}

	public void Write(string value, int length)
	{
		int num = Math.Min(value.Length, length);
		for (int i = 0; i < num; i++)
		{
			Write((byte)value[i]);
		}
		ZeroFill(length - num);
	}

	public void Write(params string[] value)
	{
		Write((byte)value.Length);
		foreach (string text in value)
		{
			if (string.IsNullOrEmpty(text))
			{
				Write((byte)0);
				continue;
			}
			Write((byte)text.Length);
			Write(text, text.Length);
		}
	}

	public void Write(byte[] values)
	{
		for (int i = 0; i < values.Length; i++)
		{
			Write(values[i]);
		}
	}

	public unsafe void WriteUnsafe(void* buf, int length)
	{
		memcpy(stream, buf, length);
		stream += length;
	}

	public unsafe void ZeroFill(int amount)
	{
		memset(stream, 0, amount);
		stream += amount;
	}

	public string[] ReadStringList()
	{
		string[] array = new string[ReadUInt8()];
		for (int i = 0; i < array.Length; i++)
		{
			array[i] = ReadCString(ReadUInt8());
		}
		return array;
	}

	public unsafe void ReadUnsafe(void* buf, int length)
	{
		memcpy(buf, stream, length);
		stream += length;
	}

	public byte[] ReadBytes(int size)
	{
		byte[] array = new byte[size];
		for (int i = 0; i < array.Length; i++)
		{
			array[i] = ReadUInt8();
		}
		return array;
	}

	public unsafe string ReadCString(int size)
	{
		string text = new string((sbyte*)stream, 0, size);
		stream += size;
		int num = text.IndexOf('\0');
		return (num > -1) ? text.Substring(0, num) : text;
	}

	public unsafe byte ReadUInt8()
	{
		byte result = *stream;
		stream++;
		return result;
	}

	public unsafe ushort ReadUInt16()
	{
		ushort result = *(ushort*)stream;
		stream += 2;
		return result;
	}

	public unsafe uint ReadUInt32()
	{
		uint result = *(uint*)stream;
		stream += 4;
		return result;
	}

	public unsafe ulong ReadUInt64()
	{
		ulong result = *(ulong*)stream;
		stream += 8;
		return result;
	}

	public sbyte ReadInt8()
	{
		return (sbyte)ReadUInt8();
	}

	public short ReadInt16()
	{
		return (short)ReadUInt16();
	}

	public int ReadInt32()
	{
		return (int)ReadUInt32();
	}

	public long ReadInt64()
	{
		return (long)ReadUInt64();
	}

	public void Finalize(ushort type)
	{
		Size = Position;
		Seek(0);
		Write((ushort)(Size - Padding));
		Write(type);
	}

	private unsafe static string CreatePacketStringWithNumbers(byte* b, int len)
	{
		int capacity = len * 4 + (len / 16 + 1) * 9;
		StringBuilder stringBuilder = new StringBuilder(capacity);
		for (int i = 0; i < len; i += 16)
		{
			stringBuilder.AppendFormat("[{0:000}] ", i);
			for (int j = i; j < i + 16; j++)
			{
				if (j >= len)
				{
					stringBuilder.Append("   ");
				}
				else
				{
					stringBuilder.AppendFormat("{0:x2} ", b[j]);
				}
			}
			stringBuilder.Append('\t');
			for (int k = i; k < i + 16; k++)
			{
				if (k >= len)
				{
					stringBuilder.Append(" ");
				}
				else if (b[k] > 32 && b[k] < 127)
				{
					stringBuilder.AppendFormat("{0}", (char)b[k]);
				}
				else
				{
					stringBuilder.Append('.');
				}
			}
			stringBuilder.Append("\r\n");
		}
		return stringBuilder.ToString();
	}

	public unsafe static string Dump(byte[] b)
	{
		fixed (byte* b2 = b)
		{
			return CreatePacketStringWithNumbers(b2, b.Length);
		}
	}

	public unsafe string Dump(string header)
	{
		int position = Position;
		Seek(2);
		int num = ReadUInt16();
		Seek(position);
		string text = "Packet (" + header + ") - Type: " + num + " Size - " + Size + "\r\n";
		return text + CreatePacketStringWithNumbers(Memory, Size);
	}
}
