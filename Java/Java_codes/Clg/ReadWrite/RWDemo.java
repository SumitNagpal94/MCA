
import java.io.*;

class Sync
{
	static Integer mutex=1;
	static Integer db=1;
	static int rc=0;
}

class Read extends Sync implements Runnable
{
	public void run()
	{
		System.out.println(Thread.currentThread().getName()+"	Reader Entered ");
			try
			{
				synchronized(db)
				{
					if(mutex==1)
					{
						mutex--;
						System.out.println(Thread.currentThread().getName()+"	File available for Reading ");
					}
					else
						throw new ArithmeticException(Thread.currentThread().getName()+"	File Cannot be Read right now ");
					rc=rc+1;
					if(rc==1)
						{
							if(db==1)
								db--;
							else
								throw new ArithmeticException(Thread.currentThread().getName()+"	File Cannot be Read right now ");
						}
					mutex=mutex+1;
					System.out.println(Thread.currentThread().getName()+"	Reader is reading now ");
					mutex--;
					rc--;
					if(rc==0)
						db++;
					mutex++;
					System.out.println(Thread.currentThread().getName()+"	Reader has finshed reading ");
				}
			}
				
			catch(Exception e)
			{
				System.out.println(e.getMessage());		
			}	
	}
}
	

class Write extends Sync implements Runnable
{

	public void run()
	{
		
		System.out.println(Thread.currentThread().getName()+"	Writer Entered ");
		
			try
			{

				if(db==1)
				{
					db--;
					System.out.println(Thread.currentThread().getName()+"	File available for Writing ");
				}
				else
					throw new ArithmeticException(Thread.currentThread().getName()+"	Cannot Write now ");
					
				System.out.println(Thread.currentThread().getName()+"	Writer is Writing now ");	
				db++;
				System.out.println(Thread.currentThread().getName()+"	Writer has finshed writing ");
			}
			catch(Exception e)
			{
					System.out.println(e.getMessage());		
			}			
	}
}

class RWDemo
{
	public static void main(String[] args)
	{

		Thread t1=new Thread(new Read());
		Thread t2=new Thread(new Read());
		Thread t3=new Thread(new Write());
		Thread t4=new Thread(new Read());
		Thread t5=new Thread(new Write());
		t1.start();
		t2.start();
		t3.start();
		t4.start();
		t5.start();
	}

}
