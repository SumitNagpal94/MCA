#include<iostream>
using namespace std;

class A
{
public:
	char name[];
	void display()
	{
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"\nHello "<<name;
	}
};

class B1: virtual public A
{
	
};

class B2:virtual public A
{
	
};

class C:public B1,public B2
{
	
};

int main()
{
	C c;
	c.display();
	return 0;
}
