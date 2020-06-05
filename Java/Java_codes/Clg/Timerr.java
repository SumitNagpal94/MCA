import java.util.Timer;
import java.util.TimerTask;

public class Timerr
{
	Timer timer;
	public static int i;

	Timerr(double sec)
	{
		try
		{
			timer=new Timer();
			timer.schedule(new TaskRem(),(int)sec*1000);		
				
			System.out.println("Task is being performed");
			Thread.sleep(2000);
			for(i=0;i<100000;i++)
			{
				System.out.print(i);
			}
		}
		catch(Exception e)
		{
			System.out.println(e.getMessage());
		}
	}


	class TaskRem extends TimerTask
	{
		public void run()
		{
			if(i>8650)
				System.out.println("\nTask finished");
			else
				System.out.println("\nOops, Time up!");	
			System.exit(0);
		}
	}

	public static void main(String[] args)
	{
		System.out.println("Task assigned");
		new Timerr(3);
	}
}