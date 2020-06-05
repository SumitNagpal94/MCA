#include<iostream>
using namespace std;

class B;
class A
{
int a;
	public:
	A(int x)
	{
	a=x;
	}
	friend void add(A,B);	
};
class B
{
int b;
	public:
	B(int y)
	{
	b=y;
	}	
	friend void add(A,B);
};

void add(A a1,B b1)
{
cout<<a1.a+b1.b;
}
int main()
{
A a(5);
B b(3);
add(a,b);
return 0;
}
