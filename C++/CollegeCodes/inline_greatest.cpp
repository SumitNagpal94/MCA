#include<conio.h>
#include<iostream> 
using namespace std;

inline int greatest(int,int,int);

inline int greatest(int num1,int num2,int num3)
{
	num1>num2?(num1>num3?cout<<"num1 is largest":cout<<"num3 is greater"):(num2>num3?cout<<"num2 is largest":cout<<"num3 is greater");
}

int main()
{	
	int num1,num2,num3;
	cout<<"Enter the 3 numbers"<<endl;
	cin>>num1>>num2>>num3;
	greatest(num1,num2,num3);
}
