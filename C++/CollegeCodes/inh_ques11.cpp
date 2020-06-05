#include<iostream>
using namespace std;

class Base1
{

friend class Base2;
int priv=10;

public:
int pub=11;

protected:
int pro=12;	
};

class Base2
{

int priv1=20;


public:
int pub1=21;

void dis(Base1 &a1)
{
cout<<"\nFrom Base Class 2\npriv and priv1 is "<<a1.priv<<" "<<priv1;
}
protected:
int pro1=22;

};
class Derived:public Base1,public Base2
{

public:

void display()
{
cout<<"\nValue of priv(not accessible),pro,pub is "<<" "<<pro<<" "<<pub;	
cout<<"\nValue of priv(NA),pro,pub is "<<" "<<pro1<<" "<<pub1;
}
};

int main()
{
	Derived d;
	d.display();
	Base1 a;
	Base2 b;
	b.dis(d);
	return 0;
}
