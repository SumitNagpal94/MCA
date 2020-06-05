#include<conio.h>
#include<iostream>
using namespace std;

int i=1;

class Complex
{
	public:
		int number;
		
	Complex(int num)
	{
	number=num;
	}
	
};


int main()
{	
	
	int n,real,img;
	cout<<"Enter the Real part of "<<i<<" number"<<endl;
	cin>>n;
	Complex a_real(n);
	cout<<"Enter the Img part of "<<i<<" number"<<endl;
	cin>>n;
	Complex a_img(n);
	i++;
	cout<<"Enter the Real part of "<<i<<" number"<<endl;
	cin>>n;
	Complex b_real(n);
	cout<<"Enter the Img part of "<<i<<" number"<<endl;
	cin>>n;
	Complex b_img(n);
	real=a_real.number+b_real.number;
	img=a_img.number+b_img.number;
	cout<<"Sum is "<<real<<" + "<<img<<" i ."<<endl;
}
