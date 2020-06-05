#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;


class Bank
{
	char name[20], type[10],initial[10];
	int account;
	
	public:
	void Initial(char *,int,char *);
	int Transaction(int,int,int);

void getdata()
{
	
	cout<<"Enter the name of the customer"<<endl;
	cin>>name;
	cout<<"Enter the Account Number of the customer"<<endl;
	cin>>account;
	do
	{
	cout<<"Enter the type of Account (Savings/Current)"<<endl;
	cin>>type;
	}while((strcmp(type,"savings")&&(strcmp(type,"current"))));
}


void Initial()
{
	cout<<"Enter the Initials for the Bank Account"<<endl;
	cin>>initial;
}

void showdata()
{
	cout<<"Name of the customer: "<<name<<endl;
	cout<<"Account Number of the customer: "<<account<<endl;
	cout<<"Type of Account: "<<type<<endl;
	cout<<"Initial Details of the employee are:"<<initial<<endl;
}

};



int main()
{

	int n;
	cout<<"Enter the total number of Customer"<<endl;
	cin>>n;
	Bank bk[n];
	for(int i=0;i<=n;i++)
	{
	bk[i].getdata();
	bk[i].Initial();
	}
	
	cout<<"Details of the Customers are:"<<endl;
	for(int i=0;i<=n;i++)
	{
	bk[i].showdata();
	cout<<endl;
	}
	return 0;
	getch();
}


