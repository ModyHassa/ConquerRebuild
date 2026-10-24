using System;
using System.CodeDom.Compiler;
using System.Diagnostics;
using System.Windows;

namespace AccountServer;

public class App : Application
{
	private bool _contentLoaded;

	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "9.0.11.0")]
	public void InitializeComponent()
	{
		if (!_contentLoaded)
		{
			_contentLoaded = true;
			((Application)this).StartupUri = new Uri("MainWindow.xaml", UriKind.Relative);
			Uri uri = new Uri("/AccountServerBinary2015;component/app.xaml", UriKind.Relative);
			Application.LoadComponent((object)this, uri);
		}
	}

	[STAThread]
	[DebuggerNonUserCode]
	[GeneratedCode("PresentationBuildTasks", "9.0.11.0")]
	public static void Main()
	{
		App app = new App();
		app.InitializeComponent();
		((Application)app).Run();
	}
}
