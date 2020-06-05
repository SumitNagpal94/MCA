import java.util.*;

class Q3String
{
	public static void main(String args[])
	{
			String s;
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter the String ");
			s=sc.next();
			
			ArrayList <String> b=new ArrayList <String>();

			for(int i=0;i<=s.length();i++)
				for(int j=i+1;j<=s.length();j++)
					if(s.substring(i,j).length()>1)
					{
						StringBuffer v=new StringBuffer(s.substring(i,j));
						String x=v.toString();
						String y=v.reverse().toString();
						if(x.equals(y))
								if(!b.contains(x))
									b.add(x);
					}
			System.out.println("Substring's are: ");
	 		for(int i=0;i<b.size();i++)
				System.out.println(b.get(i));
	}			
}