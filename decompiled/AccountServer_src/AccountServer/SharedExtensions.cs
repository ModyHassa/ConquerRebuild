using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Reflection;
using System.Text;

namespace AccountServer;

public static class SharedExtensions
{
	public unsafe static void CopyTo(this string str, int srcIndex, sbyte* pDst, int offset, int count)
	{
		for (int i = 0; i < count; i++)
		{
			pDst[offset + i] = (sbyte)str[srcIndex + i];
		}
	}

	public static string String(this bool val)
	{
		return val ? "Enabled" : "Disabled";
	}

	public static uint GenerateHash(this string owner)
	{
		uint num = 0u;
		byte[] bytes = Encoding.ASCII.GetBytes(owner);
		byte[] array = bytes;
		foreach (byte b in array)
		{
			num = (num >> 4) | (num << 4);
			num = (num ^= b);
		}
		return num;
	}

	public static void Remove<T, T2>(this ConcurrentDictionary<T, T2> owner, T key)
	{
		owner.TryRemove(key, out T2 _);
	}

	public static bool Contains(this string hayStack, string needle, StringComparison cmp)
	{
		return hayStack.IndexOf(needle, cmp) > -1;
	}

	public static bool IsNull<T>(this T obj) where T : class
	{
		return obj == null;
	}

	public static T GetPrivateVar<T>(this object obj, string name)
	{
		FieldInfo field = obj.GetType().GetField(name, BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic);
		return (T)field.GetValue(obj);
	}

	public static T2 Pipe<T, T2>(this T arg, Func<T, T2> pipe)
	{
		return pipe(arg);
	}

	public static void Pipe<T>(this T arg, Action<T> pipe)
	{
		pipe(arg);
	}

	public static bool AsBool(this int i)
	{
		return i != 0;
	}

	public static T3 WithValueOrDefault<T, T2, T3>(this IDictionary<T, T2> collection, T key, Func<T2, T3> with, T3 def = default(T3))
	{
		if (collection.TryGetValue(key, out T2 value))
		{
			return with(value);
		}
		return def;
	}

	public static T3 WithValueOrDefault<T, T2, T3>(this IDictionary<T, T2> collection, T key, Predicate<T2> where, Func<T2, T3> with, T3 def = default(T3))
	{
		if (collection.TryGetValue(key, out T2 value) && where(value))
		{
			return with(value);
		}
		return def;
	}

	public static bool ForAll<T>(this IEnumerable<T> list, Func<T, bool> result)
	{
		foreach (T item in list)
		{
			if (!result(item))
			{
				return false;
			}
		}
		return true;
	}

	public static T[] Map<T, T2>(this T2[] collection, Func<T2, T> transform)
	{
		T[] array = new T[collection.Length];
		for (int i = 0; i < collection.Length; i++)
		{
			array[i] = transform(collection[i]);
		}
		return array;
	}

	public static T[] Map<T, T2>(this List<T2> collection, Func<T2, T> transform)
	{
		T[] array = new T[collection.Count];
		for (int i = 0; i < collection.Count; i++)
		{
			array[i] = transform(collection[i]);
		}
		return array;
	}

	public static List<T> ToList<T>(this T[] collection)
	{
		List<T> list = new List<T>(collection.Length);
		for (int i = 0; i < collection.Length; i++)
		{
			list.Add(collection[i]);
		}
		return list;
	}

	public static string Delimiter<T>(this T[] collection, char delimiter)
	{
		StringBuilder stringBuilder = new StringBuilder();
		foreach (T val in collection)
		{
			stringBuilder.Append(val);
			stringBuilder.Append(delimiter);
		}
		if (stringBuilder.Length > 0)
		{
			return stringBuilder.Remove(stringBuilder.Length - 1, 1).ToString();
		}
		return stringBuilder.ToString();
	}

	public static T Singleton<T>(this T[] collection)
	{
		return collection[0];
	}

	public static void Iterate<T>(this T[] collection, Action<T> action)
	{
		foreach (T obj in collection)
		{
			action(obj);
		}
	}

	public static int CountWhile<T>(this T[] collection, Predicate<T> match)
	{
		for (int i = 0; i < collection.Length; i++)
		{
			if (!match(collection[i]))
			{
				return i;
			}
		}
		return collection.Length;
	}

	public static void Ignore<T>(this T arg)
	{
	}
}
