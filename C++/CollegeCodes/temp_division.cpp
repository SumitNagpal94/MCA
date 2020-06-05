#include<iostream>
using namespace std;

template <class A>
class Div
{
A x,y;
int i=1;
	void Dv(A a,A b)
	{
	x=a;
	y=b;
	try
	{
	if(y==0)
	throw 1; 
	else
	cout<<"\nResult is "<<x/y;
	}
	catch(int)
	{
		cout<<"Divide By Zero Error";
	}
	}
public:		

void validity()
{
	try
	{
	cout<<"Enter "<<i<<" Value (Integer/Float) ";
	i++;
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
	cout<<"Enter "<<i<<" Value (Integer/Float) ";
	if(scanf("%f",&y)==0)
	throw 1;
	else
	Dv(x,y);
	}
	catch(int)
	{
		cout<<"\nEntered Value is not int or float ";
		exit(1);
	}		
	
}

};

//int Div::<int>i=1;

int main()
{
Div <float>d;
d.validity();
return 0;
}
