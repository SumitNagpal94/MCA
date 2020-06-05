#include<conio.h>
#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	
	public:
	
	Complex getdata()
	{
		
	cout<<"Enter the Real and Img part of first number"<<endl;
	Complex a,b,c;
	cin>>a.real>>a.img;
	cout<<"Enter the Real and Img part of second number"<<endl;
	cin>>b.real>>b.img;
	c.real=a.real+b.real;
	c.img=a.img+b.img;
	return c;
	}
	
	void show(Complex);
};



void Complex::show(Complex c)
{
cout<<"Sum is "<<c.real<<" + "<<c.img<<" i ."<<endl;
}

int main()
{	
	Complex temp=temp.getdata();
	temp.show(temp);	
}
