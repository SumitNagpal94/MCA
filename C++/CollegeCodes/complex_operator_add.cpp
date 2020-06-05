#include<conio.h>
#include<iostream>
using namespace std;

class complex
{
	int real,img;
	public:
		static int i;
		int getdata()
		{
		cout<<"\n\n\nEnter the real part of "<<i<<" Complex Number\n";
		cin>>real;
		cout<<"Enter the img part of "<<i<<" Complex Number\n";
		cin>>img;
		}
		
		int operator +(complex &a)
		{
			real=real+a.real;
			img=img+a.img;

			display();
		}
		int display()
		{
			cout<<"\n\n\nSum of entered Complex number is "<<real<<" + "<<img<<" i\n";
		}
	complex()
	{
		getdata();
		i++;
	}
};
int complex::i=1;
int main()
{
	cout<<"Addition of Complex Numbers";
	complex a,b;
	a+b;
	return 0 ;
}

