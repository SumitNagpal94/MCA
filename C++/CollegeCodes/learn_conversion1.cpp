#include<iostream>
using namespace std;
class B
{
	public:
	int a,b;
	
void display()
{
	cout<<"a is "<<a<<" and b is "<<b;
}
};

class A
{
	int a,b;
	
	public:
		
	A(int x,int y)
	{
		a=x;
		b=y;
	}
	
	operator B()
	{
	B x;
	x.a=a;
	x.b=b;
	return x;
	}
	
};

int main()
{
	B b;
	A a(3,4);
	b=a;
	b.display();
	return 0;
}
