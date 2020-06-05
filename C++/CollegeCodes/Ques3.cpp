#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class Bank
{
	char name[20], type[10],initial[10];
	int account,balance,withdraw;
	
	public:

void getdata()
{
	
	cout<<""<<endl;
	cout<<"Enter the name of the customer"<<endl;
	cin>>name;
	cout<<"Enter the Account Number of the customer"<<endl;
	cin>>account;
	do
	{
	cout<<"Enter the type of Account (savings/current)"<<endl;
	cin>>type;
	}while((strcmp(type,"savings"))&&(strcmp(type,"current")));
}

void showdata()
{

	cout<<"Name of the customer: "<<name<<endl;
	cout<<"Account Number of the customer: "<<account<<endl;
	cout<<"Type of Account: "<<type<<endl;
	cout<<"Initial Details of the customer are: "<<initial<<endl;
	cout<<"Balance of the Customer is: "<<balance<<endl;
}
	
void Initial()
{
	cout<<"Enter the Initials for the Bank Account"<<endl;
	cin>>initial;
}

void Transaction()
{
	
	cout<<""<<endl;
	do{
	cout<<"Enter the amount to be deposited (Min 1000)"<<endl;
	cin>>balance;
	}while(balance<1000);
}

void Withdrawal()
{
cout<<"Enter the amount to be withdrawn"<<endl;
cin>>withdraw;
if(balance>withdraw)
{
cout<<"Amount Withdrawn Successfully\n"<<endl;
balance-=withdraw;
cout<<"Your updated Balance is "<<balance<<endl;
}
else
cout<<"Your account Balance is insufficient for this transaction"<<endl;
}
 
};
int main()
{
	
	int n;
	cout<<"Enter the total number of Customer"<<endl;
	cin>>n;
	Bank bk[n];
	for(int i=0;i<n;i++)
	{
	bk[i].getdata();
	bk[i].Initial();
	bk[i].Transaction();
	bk[i].Withdrawal();
	}
	
	cout<<"\n\n\nDetails of the Customers are:"<<endl;
	for(int i=0;i<n;i++)
	{
	bk[i].showdata();
	cout<<"\n";
	}
	return 0;

}

