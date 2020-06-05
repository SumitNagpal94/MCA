import java.util.*;
import java.io.*;

class Palindrome extends Thread
{
	static String s;
	int value;
	static FileWriter fw;
	static BufferedWriter bw;
	static ArrayList <String> b=new ArrayList <String>();
	
	static
	{
		StringBuilder str = new StringBuilder();
		
		try
		{
			BufferedReader bf= new BufferedReader(new FileReader("DNA_Seq.txt"));
			int i;
			do
			{
				i=bf.read();
				if(i!=-1)
					str.append(Character.toString((char)i));
				
			}while(i!=-1);
			
			s=str.toString();
			File f1=new File("Palindrome_substrings.txt");
			if(f1.exists())
				f1.delete();
			fw=new FileWriter("Palindrome_substrings.txt",true);
			bw=new BufferedWriter(fw);
			
		}
		catch(IOException e)
		{
			System.out.println(e.getMessage());
		}
	}

	Palindrome(int value)
	{
		this.value=value;
	}
	public void run()
	{
			try
			{
					for(int i=0;i<=(s.length()-value);i++)
					{
						StringBuffer v=new StringBuffer(s.substring(i,i+value));
						String x=v.toString();
						String y=v.reverse().toString();
						if(x.equals(y))
								if(!b.contains(x))
									bw.write(x+"	");
					}
			}
			catch(IOException e)
			{
				System.out.println(e.getMessage());
			}
	}	
}

class Q7String
{
	public static void main(String args[]) throws IOException,InterruptedException
	{
			File f = new File("DNA_Seq.txt");
			Palindrome p[]=new Palindrome[(int)f.length()];
			for(int i=3;i<f.length();i++)
			{
				p[i]=new Palindrome(i);
				p[i].start();
			}
			for(int i=3;i<f.length();i++)
				p[i].join();	

			Palindrome.bw.close();
	}
}