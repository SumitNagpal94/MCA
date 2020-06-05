#include<string.h>
#include<iostream>
using namespace std;

class A
{
	char a[10];
	
	public:
	A()
	{
		
	}
	
	A(char b[10])
	{
	strcpy(a,b);
	cout<<a;
		cout<<"A COn";
	}
};
class B:public A
{
	public:
	B()
	{	
	cout<<"B Con ";
	}	
};

class C:public A
{

	public:
C(char name[10]):A(name)
{
cout<<"C Con";
}	
};

int main()
{
	char name[10];
	cout<<"Enter name";
	cin>>name;
	C c(name);
	return 0;
}
