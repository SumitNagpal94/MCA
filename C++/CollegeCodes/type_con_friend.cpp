#include<iostream>
#include<string.h>
using namespace std;

class B;
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
	friend void operator =(A,B); 	
};


class B
{
	public:
	int x;
	char y; 
		
	void display()
	{
	cout<<"X= "<<x<<" Y= "<<y<<endl;
	}
	friend void operator=(A,B);
};
A operator=(A a,B b)
{
B.x=A.a;
B.y=A.b;
}

int main()
{
	A a;
	B b1;
	a.getdata();
	b1=a;
	b1.display();
	return 0;
}
