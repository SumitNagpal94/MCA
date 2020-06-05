#include<iostream>
using namespace std;
class A
{
protected:
	void hello()
	{
		cout<<"\nhello\n";
	}
};
class B:virtual public A
{	
};
class C:virtual public A
{	
};
class D:public B,public C
{
	public:
	
	void disp()
	{
	hello();
	hello();
	}
};
int main()
{
	D d;
	d.disp();
}
