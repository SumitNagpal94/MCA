#include<conio.h>
#include<iostream>
using namespace std;

class Least
{
	int a,b,c;
	
	public:
		
	void least(int a,int b,int c)
	{
	this->a=a;
	this->b=b;
	this->c=c;
	cout<<"\n";
	a<b?(a<c?cout<<"A ("<<a<<") is least":cout<<"C ("<<c<<") is least"):(b<c?cout<<"B ("<<b<< ") is least":cout<<"C ("<<c<<") is least");
	}
	
	Least()
	{

		cout<<"Enter Value of a ";
		cin>>a;
		cout<<"Enter Value of b ";
		cin>>b;
		cout<<"Enter Value of c ";
		cin>>c;
		least(a,b,c);
	}
};
int main()
{
	Least l;
}
