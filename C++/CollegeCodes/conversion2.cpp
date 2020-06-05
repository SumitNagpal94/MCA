#include<iostream>
using namespace std;

class A
{

int a,b;

public:
	A()
	{
	}
	A(int p,int q)
	{
	a=p;
	b=q;
	}
	int geta()
	{
		return a;
	}
	int getb()
	{
		return b;
	}


};

class B
{
	int a,b;
	
	public:
	
	B()
	{
	}	
	B(A x)
	{
		a=x.geta();
		b=x.getb();
	}
	void display()
	{
		cout<<"Value of a is "<<a<<" and value of b is "<<b<<endl;
	}
};

int main()
{
	A a(4,5);
	B b;
	b=a;
	b.display();
}

