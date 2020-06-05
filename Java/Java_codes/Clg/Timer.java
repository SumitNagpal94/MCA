import java.util.*;
class Timer extends Thread
{
	static int i=0;
	static int j=0;
	static int k=0;
	public void run()
	{
		try
		{
			for(int i=0;i<24;i++)
				for(int j=0;j<60;j++)
					for(int k=0;k<60;k++)
					{
						System.out.println(i+":"+j+":"+k);
						Thread.sleep(1000);
						if(k==60)
						{
							i=0;
							j=0;
							k=0;
						}
					}
		}
		catch(Exception e)
		{
			System.out.println(e.getMessage());
		}
	}
	public static void main(String[] args)
	{
		Timer t=new Timer();
		t.start();
	}
}