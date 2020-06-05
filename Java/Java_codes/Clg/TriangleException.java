import java.util.*;

class InvalidTriangleException
{
	public String toString()
	{
		return "Entered Sides doesnot form Triangle";
	}	
}
class TriangleException
{
	int s1,s2,s3;

	public static void main(String[] args) 
	{
		TriangleException()
		{}
		TriangleException(int a,int b,int c)		
		{
			try
			{
			if(a+b>c&&b+c>a&&a+c>b)
			{
				s1=a;
				s2=b;
				s3=c;
			}
			else
				throw new InvalidTriangleException();
			}
			catch(InvalidTriangleException e)
			{
				System.out.println("Exception "+e.getMessage());
			}
		}
		void setter(int a,int b,int c)
		{

		}
		{

		}
	}
}