#include<iostream>
using namespace std;

template<class A,class B>

A hello(A x,B y)
{
B z=x+y;
return z;	
}

int main()
{
int p=34;
float q=9.33;
float b=hello(p,q);
cout<<b;
}




/*
template<class X>
class A
{
	X &x,y,z;
	public:

	A(int p,int q):x(q)
	{
	y=p;
	}
	
	void getdata()
	{
	cout<<"ENter number";
	cin>>z;
	}
	void display()
	{
	cout<<x<<endl<<y<<endl<<z;
	}
	
};
int main()
{
A <int>a(13,2);
a.getdata();
a.display();
}

*/
