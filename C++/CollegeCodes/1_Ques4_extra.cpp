#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

char userid[10];

class Bank
{
	char loginid[10],loginid1[10], password[10],Password1[10],confirm[10];
	int amount,balance,withdraw;
	
	public:
	
char login()
{
	cout<<"\nEnter the login of the customer"<<endl;
	cin>>loginid;
	cout<<"Enter the password"<<endl;
	cin>>password;
	match();
	Transaction();
	Withdrawal();
	showdata();
	
}

void match()
{
	cout<<"\n\n\n";
	cout<<"Enter the loginid"<<endl;
	cin>>loginid1;
	if(strcmp(loginid,loginid1))
	{
	cout<<"User Details not found, please try again later"<<endl;
	match();
	}
	else
	{
	cout<<"Enter the password"<<endl;
	cin>>Password1;
		if(strcmp(password,Password1))
		{
		cout<<"Invalid Password Entered,Please try again"<<endl;
		match();
		}
	else
		{
		cout<<"Confirm the password"<<endl;
		cin>>confirm;
		if(strcmp(password,confirm))
		{
		cout<<"Invalid Password entered\n\n";
		match();
		}
	strcpy(userid,loginid);
		}
	}

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
	/*bk[i].Transaction();
	bk[i].Withdrawal();
	bk[i].showdata();
	bk[i].match();
	*/
	while(1)
{
	cout<<"\n\nSelect the Below operations for the Operation\n1:Withdraw\n2:Deposit\n3:Request Balance\n4:Exit"<<endl;
	cin>>n;
	
	
	switch(n)
	{
		case 1:
			bk[i].Withdrawal();
			break;
		case 2:
			bk[i].Transaction();
			break;
		case 3:
			bk[i].showdata();
			break;
		case 4:
			exit(1);
			break;
		default:
			cout<<"Invalid Selection"<<endl;
	}
	
}
		return 0;

}

