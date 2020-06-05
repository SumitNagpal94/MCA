#include<iostream>
using namespace std;


class count
{

int c;

public: 

	count()
	{
	}
	
	count(int i)
	{
	c=i;	
	}
	
		int getc()
		{
		return c;	
		}
	
	void operator++()
	{
	c++;
	cout<<"\nValue after increment is "<<c;
	}
};

class counter:public count
{
	public:
		
	int operator--()
	{
	int a=getc();
	a--;
	cout<<"\nValue after decrement is "<<a;
	}
	
	counter(int b):count(b)
	{
	}	
};

int main()
{
	int c;
	cout<<"Enter the value for C ";
	cin>>c;
	counter C(c);
	++C;
	--C;
	return 0;
}
