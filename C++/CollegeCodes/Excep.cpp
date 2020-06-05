#include<string.h>
#include<ctype.h>
#include<iostream>
using namespace std;

int main()
{
	int a;
	char div[3];
	do
	{
	cout<<"Do you want to check for Division (Yes or No) ";
	cin>>div;
	}while(strcmp(div,"Yes") and strcmp(div,"No"));
	
if(strcmp(div,"Yes")==0)
{
	try
	{
	int num1,num2;
	cout<<"Enter the number 1 "<<endl;
	cin>>num1;
	cout<<"Enter the number 2 "<<endl;
	cin>>num2;
	if(num2==0)
	throw 1;
	else
	cout<<"\nDivision of num1 and num2 : "<<num1/num2;
	}
	catch(int)
	{
		cout<<"\nDivide by Zero Error "<<endl;
	}
}
	char test[3];
	do
	{
	cout<<"\nDo you want to check validation of Digit ";
	cin>>test;
	}while(strcmp(div,"Yes") and strcmp(div,"No"));
	
if(strcmp(test,"Yes")==0)
{
	try
	{
	cout<<"Enter any Digit ";
	cin>>a;
	if( cin.fail() )
	throw 1;
	else
	cout<<"Entered Digit is "<<a<<endl;
	}
	catch(int)
	{
		cout<<"Entered Value is not Digit "<<endl;
	}
}
}
