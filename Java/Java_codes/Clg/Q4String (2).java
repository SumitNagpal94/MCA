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

			ArrayList<String> s1=new ArrayList<String>();
			for(int i=0;i<s.length();i++)
				for(int j=0;j<s.length();j++)
					{
						String joinedString=String.join("",Character.toString(a[i]),Character.toString(a[j]));
						if(!s1.contains(joinedString))
							s1.add(joinedString);
					}

		
			int count[]=new int[s1.size()];
			
			for(int i=0;i<s1.size();i++)
			{
				int z=0,lastIndex=0;
				while(lastIndex>=0)
				{
					lastIndex=s.indexOf(s1.get(i),z);
					if(lastIndex!=-1)
						{
							count[i]++;
							z=lastIndex+1;
						}
				}
			}

			for(int i=0;i<s1.size();i++)
				System.out.println(s1.get(i)+" "+count[i]);
	}

}