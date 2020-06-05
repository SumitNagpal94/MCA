#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class Bank
{
	char name[20], type[10],initial[10];
	float balance,time;
	
	public:

void getdata()
{
	
	cout<<""<<endl;
	cout<<"Enter the name of the customer"<<endl;
	cin>>name;
	do
	{
	cout<<"Enter the type of Account (savings/current)"<<endl;
	cin>>type;
	}while((strcmp(type,"savings"))&&(strcmp(type,"current")));
}


void showdata()
{

	cout<<"Name of the customer: "<<name<<endl;
	cout<<"Type of Account: "<<type<<endl;
	cout<<"Balance of the Customer is: "<<balance<<endl;
}
	
void Transaction()
{
	
	cout<<""<<endl;
	do{
	cout<<"Enter the amount to be deposited (Min 1000)"<<endl;
	cin>>balance;
	}while(balance<1000);
time_check();
}
void interest(int a,int t,int b=0)
{
	int x=t;
	do
	{
	balance+=balance*a/100;
	t--;
	cout<<"Executed bal is"<<balance<<"\n";
	}while(t>0);
	do
	{
	cout<<"Inside 5 max"<<endl;
	balance+=balance*b/100;
	x--;
	cout<<"Executed bal is"<<balance<<"\n";
	}while(x-5>0);
}

	void time_check()
	{
	cout<<"Enter the time duration for which you want to save this amount";
	cin>>time;
	if(time<5)
	{
	cout<<"Type is "<<type<<endl;
	if(strcmp(type,"current"))
	interest(6,time);
	else
	interest(4,time);
	}
	else
	{
	if(strcmp(type,"current"))
	interest(6,time,3);
	else
	interest(4,time,3);
	}
		}
};
int main()
{
	
	Bank bk;
	bk.getdata();
	bk.Transaction();
	
	cout<<"\n\n\nDetails of the Customers are:"<<endl;
	bk.showdata();
	cout<<"\n";
	return 0;
}

