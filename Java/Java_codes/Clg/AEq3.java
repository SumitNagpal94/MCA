import java.util.*;

class AEq3
{

	public static void main(String [] args)
	{
		System.out.println("Enter String");
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		char a[]=s.toCharArray();
		int count=0;
		
		for(int i=0;i<s.length()-2;i++)
		{
			if(a[i]==a[i+1]&&a[i+1]==a[i+2])
			{
				if(i<s.length()-4)
				{
					if(a[i+3]==a[i+4]&&a[i]!=a[i+3])
					{
						if(i>=2)
						{
							if(a[i-1]==a[i-2]&&a[i]!=a[i-1])
							{
								if(a[i+1]=='a')
									a[i+1]='b';
								else
									a[i+1]='a';	
							}
							else
							{
							if(a[i]=='a')
								a[i]='b';
							else
								a[i]='a';	
							}
						}
						else
						{
						if(a[i]=='a')
								a[i]='b';
							else
								a[i]='a';	
						}
					} 
					else
					{
						if(a[i+2]=='a')
							a[i+2]='b';
						else
							a[i+2]='a';
					}

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
			

		for(int i=0;i<s.length();i++)
			System.out.print(a[i]);
		System.out.print("\n"+count);	
	}
}