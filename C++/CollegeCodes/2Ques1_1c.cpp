#include<conio.h>
#include<iostream>
using namespace std;

int i=1;

class Complex
{
	public:
		int real,img;
		
	Complex(int rl,int ig)
	{
	real=rl;
	img=ig;
	}
	
};


int main()
{	
	
	int rl,ig,real,img;
	cout<<"Enter the Real part of "<<i<<" number"<<endl;
	cin>>rl;
	cout<<"Enter the Img part of "<<i<<" number"<<endl;
	cin>>ig;
	Complex a(rl,ig);
	i++;
	cout<<"Enter the Real part of "<<i<<" number"<<endl;
	cin>>rl;
	cout<<"Enter the Img part of "<<i<<" number"<<endl;
	cin>>ig;
	Complex b(rl,ig);
	real=a.real+b.real;
	img=a.img+b.img;
	cout<<"Sum is "<<real<<" + "<<img<<" i ."<<endl;
}
