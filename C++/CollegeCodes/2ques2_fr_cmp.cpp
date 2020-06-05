#include<iostream>
using namespace std;

class Complex
{
int real,img;

public:
	
static int i;
void getdata()	
{
	cout<<"Enter the values for "<<i<<" real number"<<endl;
	cin>>real;
	cout<<"Enter the values for "<<i<<" img number\n\n"<<endl;
	cin>>img;
	i++;
}
void showdata()	
{
	cout<<"Resultant Value is "<<real<<" +"<<img<<" i"<<endl;
}
friend Complex &add(Complex &,Complex &);
};
int Complex::i=1;
Complex &add(Complex &a,Complex &b)
{
Complex x;
x.real=a.real+b.real;
x.img=a.img+b.img;
return x;
}

int main()
{
	Complex a,b,c;
	a.getdata();
	b.getdata();
	c=add(a,b);
	c.showdata();
	return 0;
}
