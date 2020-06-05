import java.util.*;

class AE1
{

	public static void main(String [] args)
	{
	System.out.println("Enter String");
	Scanner sc=new Scanner(System.in);
	String s=sc.next();
	char a[]=s.toCharArray();
	int count=0;
	//if(s.length()<=2)
	//	return 0;
	for(int i=0;i<s.length()-2;i++)
	{
		if(a[i]==a[i+1]&&a[i+1]==a[i+2])
		{
			if(i>2)
			{
				if(a[i]!=a[i-1])
 					{
 					if(a[i]=='a')
 						a[i]='b';
					else
						a[i]='a';
					}
			

				else
				{
					if(a[i+2]=='a')
						a[i+2]='b';
					else
						a[i+2]='a';
				}
				count++;
			}
		}
		else
			System.out.println("0\nexit");
	}

		for(int i=0;i<s.length();i++)
			System.out.print(a[i]);
		System.out.print("\n"+count);	
	}
}