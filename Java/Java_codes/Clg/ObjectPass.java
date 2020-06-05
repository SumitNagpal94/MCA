import java.util.Scanner;

class A
{
	int x;
	
	A input()
	{
	A b=new A();
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter value for x");
	b.x=sc.nextInt();
	return b;
	}
	void display()
	{
		System.out.println("Value for x "+x);
	}
}

class ObjectPass
{
	public static void main(String[] args)
	{
		A a=new A();
		A c=new A();
		c=a.input();
		c.display();
		
	}
}
