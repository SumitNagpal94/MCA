import java.util.*;
import java.lang.Math;

class Q4String
{
	
	public static void main(String args[])
	{

			String s;

			Scanner sc=new Scanner(System.in);
			System.out.println("Enter the String ");
			s=sc.next();
			char[] a=s.toCharArray();
			int p[]=new int[s.length()];
			int d=0,z=0;

			for(int i=0;i<s.length();i++)
				for(int j=i+1;j<s.length();j++)
					if(a[i]==a[j])
						p[i]=p[i]+1;

			char c[]=new char[s.length()];

			for(int i=0;i<s.length();i++)
				if(p[i]==0)
				{
					c[d]=a[i];
					d++;
				}

			String b[]=new String[(int)Math.pow(s.length(),2)];

			for(int i=0;i<=s.length();i++)
			{
				for(int j=i+1;j<=s.length();j++)
				{

					if(s.substring(i,j).length()>1)
					{
						StringBuffer v=new StringBuffer(s.substring(i,j));
						String x=v.toString();
						String y=v.reverse().toString();
						if(x.equals(y))
							{
						//	System.out.println(x);
							b[z]=x;
						//	System.out.println(b[z]);
							z++;	
							}
						

					}
				}
			}
			int q[]=new int [z];
			int y=0;
			for(int i=0;i<z;i++)
			{
				
			
				for(int j=i+1;j<z;j++)
				{
					
					//System.out.println(b[i]+"=="+b[j]);
					if(b[i].equals(b[j]))
						q[i]=q[i]+1;				
				}
			}

			String e[]=new String[z];

			for(int i=0;i<z;i++)
				if(q[i]==0)
				{
					e[y]=b[i];
					y++;
				}
	 		for(int i=0;i<y;i++)
				System.out.println(e[i]);
	}
			
}