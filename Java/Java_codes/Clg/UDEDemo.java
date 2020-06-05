import java.util.*;

class InvalidTriangleException	extends Exception
{
	public String toString()
	{
		return "Entered Sides doesnot form Triangle";
	}	
}
class UDEDemo
{
	int s1,s2,s3;

	
		UDEDemo()
		{
		}
		
		UDEDemo(int a,int b,int c) throws Exception		
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

		void setter(int a,int b,int c) throws Exception
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

		double perimeter()
		{
			return s1+s2+s3;
		}

		double area()
		{
			double s=(s1+s2+s3)/2;
			return(Math.sqrt(s*(s-s1)*(s-s2)*(s-s3)));
		}

		public static void main(String[] args) throws Exception
		{	
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter Side1 of Triangle1");
			int s1=sc.nextInt();
			System.out.println("Enter Side2 of Triangle1");
			int s2=sc.nextInt();
			System.out.println("Enter Side3 of Triangle1");
			int s3=sc.nextInt();
			try
			{
				UDEDemo t=new UDEDemo(s1,s2,s3);
				double p=t.perimeter();
				double a=t.area();
				System.out.println("perimeter is"+p+"\nArea is "+a);
			}
			catch(InvalidTriangleException e)
			{
				System.out.println("Exception "+e);
			}
			

				System.out.println("\nEnter Side1 of Triangle2");
				s1=sc.nextInt();
				System.out.println("Enter Side2 of Triangle2");
				s2=sc.nextInt();
				System.out.println("Enter Side3 of Triangle2");
				s3=sc.nextInt();
				UDEDemo u=new UDEDemo();
				try
				{
				u.setter(s1,s2,s3);
				double p=u.perimeter();
				double a=u.area();
				System.out.println("perimeter is"+p+"\nArea is "+a);
				}
				catch(InvalidTriangleException e)
				{
				System.out.println("Exception "+e);
				}
				finally
				{
					System.out.println("Good");
				}
			}
		}