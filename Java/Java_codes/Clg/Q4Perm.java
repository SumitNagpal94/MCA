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

			String b[]=new String[Math.pow(d,2)];

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
							b[z]=x;
							z++;	
							}
						//System.out.println(x);

					}
				}
			}
			int q[]=new int [d];
			int y=0;
			for(int i=0;i<b.length;i++)
				for(int j=i+1;j<b.length;j++)
					if(b[i]==b[j])
						q[i]=q[i]+1;

			char e[]=new char[b.length];

			for(int i=0;i<s.length();i++)
				if(p[i]==0)
				{
					e[y]=a[i];
					y++;
				}

	}
			
}