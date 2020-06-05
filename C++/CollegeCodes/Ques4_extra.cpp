#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

char userid[10];

class Bank
{
	char loginid[10], password[10],confirm[10];
	int amount,balance,withdraw;
	
	public:
	
char login()
{
	cout<<"\nEnter the login of the customer"<<endl;
	cin>>loginid;
	
	do{
	cout<<"Enter the password"<<endl;
	cin>>password;
	cout<<"Confirm the password"<<endl;
	cin>>confirm;
	}while(strcmp(password,confirm));
	strcpy(userid,loginid);
}



void showdata()
{
	cout<<"Name of the customer: "<<userid<<endl;
	cout<<"Balance of the Customer is: "<<balance<<endl;
}
	
void Transaction()
{
	
cout<<"\n"<<endl;
	do{
	cout<<"Enter the amount to be deposited (Min Balance to be mantained: 1000)"<<endl;
	cin>>amount;
	balance+=amount;
	}while(balance<1000);
}

void Withdrawal()
{
cout<<"Enter the amount to be withdrawn"<<endl;
cin>>withdraw;
if(balance>withdraw)
{
cout<<"Amount Withdrawn Successfully\n";
balance-=withdraw;
cout<<"Your updated Balance is "<<balance<<"\n"<<endl;
}
else
cout<<"\nYour account Balance is insufficient for this transaction"<<endl;
}

 Bank()
 {
 	balance=0;
 	amount=0;
 }
 
};

int main()
{
	
	int i=0,n;
	Bank bk[20];
	bk[i].login();
	bk[i].Transaction();
	while(1)
{
	cout<<"\n\nSelect the Below operations for the Operation\n1:Login\n2:Deposit\n3:Withdraw\n4:Show Balance\n5:Exit"<<endl;
	cin>>n;
	
	
	switch(n)
	{
		case 1:
			i++;
			bk[i].login();
			break;
		case 2:
			bk[i].Transaction();
			break;
		case 3:
			bk[i].Withdrawal();
			break;
		case 4:
			bk[i].showdata();
			break;
		case 5:
			exit(1);
		default:
			cout<<"Invalid Selection"<<endl;
	}
	
}
		return 0;

}

