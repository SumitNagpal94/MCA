#include<iostream>
using namespace std;
/*
class A
{
protected:
int a=10;
public:
	void d()
	{
	a=11;
	cout<<"damn a"<<a;	
	}	
};
class B:public A
{
	public:
	void d()
	{
	cout<<"\nA from B "<<a;
	}
};
int main()
{
	A *a;
	B b;
	*a = &b;
	a->d();
	//b.d();
	
}

*/
class item
{
	public:
	int i,j;
	
	public:
	void display()
	{
		cout<<"i is "<<i<<" j is "<<j;
		}	
};

class product
{
	private:
		int a=10,b=5;
	public:
	operator item()
	{
		item it;
		it.i=a;
		it.j=b;
		return it;
	}
};

int main()
{
	product p;
	item i;
	i=p;
	i.display();
}
