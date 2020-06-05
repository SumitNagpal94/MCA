#include<string.h>
#include<typeinfo>
#include<math.h>
#include<iostream>
using namespace std;

template <class A>
class Power
{
A x;
int y;

	void Pwr(A a,int b)
	{
	x=a;
	y=b;
	cout<<"\nResult is "<<pow(x,y);
	}
	
public:		

void validity()
{
	try
	{
	cout<<"Enter Value (Integer/Float) ";
	if(scanf("%f",&x)==1)
	cout<<endl;
	else
	throw 1;
	}
	catch(int)
	{
		cout<<"\nEntered Value is not int or float ";
		exit(1);
	}		
	try
	{
	cout<<"Enter Power (Integer) ";
	//if(scanf("%f",&y)==0)
	cin>>y;
	if(cin.get()=='.' or cin.fail())
	throw 1;
	else
	Pwr(x,y);
	}
	catch(int)
	{
		cout<<"\nEntered Power is not Integer ";
		exit(1);
	}		
	
}	

};

int main()
{
Power <float>p;
p.validity();
}
