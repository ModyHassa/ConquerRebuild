using System;
using System.Threading;

namespace AccountServer;

public class ProcessFactory
{
	private const int REST = 2;

	private Action[] actions;

	private Thread[] threads;

	private int pos;

	public ProcessFactory(int workers)
	{
		actions = new Action[workers];
		threads = new Thread[workers];
		for (int i = 0; i < workers; i++)
		{
			threads[i] = new Thread(Process);
		}
	}

	private void Process(object operationObj)
	{
		int num = (int)operationObj;
		while (true)
		{
			if (actions[num] != null)
			{
				actions[num]();
			}
			Thread.Sleep(2);
		}
	}

	public void Start()
	{
		for (int i = 0; i < threads.Length; i++)
		{
			threads[i].Start(i);
		}
	}

	public void Stop()
	{
		for (int i = 0; i < threads.Length; i++)
		{
			threads[i].Abort();
		}
	}

	public void AddProcess(Action process)
	{
		ref Action reference = ref actions[pos];
		reference = (Action)Delegate.Combine(reference, process);
		pos = (pos + 1) % actions.Length;
	}
}
