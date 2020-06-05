#include<iostream>
#include<string.h>
using namespace std;

class B
{
	public:
	int x;
	char y; 
		
	void display()
	{
	cout<<"X= "<<x<<" Y= "<<y<<endl;
	}
};

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
		
		operator B()
		{
		B temp;
		temp.x=a;
		temp.y=b;	
		return temp;
		} 	
};

int main()
{
	A a;
	B b1;
	a.getdata();
	b1=a;//b1=a.operator B()
	b1.display();
	return 0;
}
