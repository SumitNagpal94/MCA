#include<conio.h>
#include<iostream>
using namespace std;

int i=1;

class Complex
{
	
	public:
	
	int real,img;

	Complex()
	{
	cout<<"Enter the Real and Img part of "<<i<<" number"<<endl;
	cin>>real>>img;
	i++;
	}
	
};


int main()
{	
	int real,img;
	Complex a,b;
	real=a.real+b.real;
	img=a.img+b.img;
	cout<<"Sum is "<<real<<" + "<<img<<" i ."<<endl;
}
