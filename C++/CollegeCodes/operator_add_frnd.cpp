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
		
		friend complex &operator +(complex &a,complex &b);
		int display()
		{
			cout<<"\n\n\nSum of entered Complex number is "<<real<<" + "<<img<<" i\n";
			return 0;
		}
	complex()
	{
		i++;
	}
};
complex &operator +(complex &a,complex &b)
		{
			complex temp;
			temp.real=a.real+b.real;
			temp.img=a.img+b.img;
			temp.display();
		}
		
int complex::i=1;
int main()
{
	cout<<"Addition of Complex Numbers";
	complex a,b;
	a.getdata();
	b.getdata();
	a+b;
	return 0;
}

