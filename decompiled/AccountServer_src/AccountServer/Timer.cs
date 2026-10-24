namespace AccountServer;

public class Timer
{
	private uint time;

	public int RemainingTime => (int)(time - TimeStamp.GetTime());

	public int ElapsedSinceTick => (int)(TimeStamp.GetTime() - time);

	public Timer(bool local = true)
	{
		time = (local ? TimeStamp.GetTime() : 0u);
	}

	public void Set(uint time, int amount)
	{
		this.time = (uint)(time + amount);
	}

	public void Set(int amount)
	{
		time = (uint)(TimeStamp.GetTime() + amount);
	}

	public bool ValidateFrame(uint now, int leeway)
	{
		if (time == 0)
		{
			time = now;
			return true;
		}
		int num = (int)(now - time);
		bool flag = num > leeway;
		if (flag)
		{
			time = now;
		}
		return flag;
	}

	public bool IsReady(uint now)
	{
		return time < now;
	}

	public static implicit operator bool(Timer t)
	{
		return t.time < TimeStamp.GetTime();
	}
}
