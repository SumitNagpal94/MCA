#include<iostream>
#include<string.h>
using namespace std;

class A
{
	int a;
	char b;
	
	public:
		void getdata()
		{
		cout<<"Enter number";
		cin>>a;
		cout<<"Enter character";
		cin>>b;
		} 	
		int getA()
		{
			return a;
		}
		char getB()
		{
		return b;
		}
};

class B
{
	int x;
	char y;
	public: 
	B()
	{
	}
	B(A a)
	{
	x=a.getA();	
	y=a.getB();
	}	
	void display()
	{
	cout<<"X= "<<x<<" Y= "<<y<<endl;
	}
};

int main()
{
	A a;
	B b;
	a.getdata();
	b=a;
	b.display();
	return 0;
}
