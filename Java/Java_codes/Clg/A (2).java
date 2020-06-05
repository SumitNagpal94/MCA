class A
{
	
	int x=0;
	void f1()
	{
		x++;
		System.out.println(x++);
	}
	public static void main(String []args)
	{
		A a=new A();
		a.f1();
	}
}