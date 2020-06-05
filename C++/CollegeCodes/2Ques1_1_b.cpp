#include<conio.h>
#include<iostream>
using namespace std;


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
	
	int n,rl[2],ig[2],real,img;
	for(int i=0,j=1;i<2;i++,j++)
	{
	cout<<"Enter the Real part of "<<j<<" number"<<endl;
	cin>>n;
	Complex rl[i](n);
	cout<<"Enter the Img part of "<<j<<" number"<<endl;
	cin>>n;
	Complex ig[i](n);
	}
	real=rl[0].number+rl[1].number;
	img=ig[0].number+ig[1].number;
	cout<<"Sum is "<<real<<" + "<<img<<" i ."<<endl;
}
