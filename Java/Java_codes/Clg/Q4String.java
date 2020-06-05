import java.util.*;

class Q4String
{
	
	static int k=0;

	public static void main(String args[])
	{

			String s;

			Scanner sc=new Scanner(System.in);
			System.out.println("Enter the String ");
			s=sc.next();
			

			String b[]=new String[Math.power(d,2)];

			for(int i=0;i<=s.length();i++)
			{
				for(int j=i+1;j<=s.length();j++)
				{

					if(s.substring(i,j).length()>1)
					{
						StringBuffer a=new StringBuffer(s.substring(i,j));
						String x=a.toString();
						String y=a.reverse().toString();
						if(x.equals(y))
						
						//System.out.println(x);	
					}
				}
			}
	}
}