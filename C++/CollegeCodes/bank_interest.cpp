#include<conio.h>
#include<string.h>
#include<iostream>
#include<ctime>
using namespace std;

int error;
void cl()
			{
			cin.clear();
			cin.ignore(10000, '\n'); 
			cout<<"\nInvalid Format, Please try again\n";
			error=1;
			}


class Date
{
	int date,month,year,d,m,y;
	
	public:
	
	void getdate()
	{
	cout<"Enter the date in format dd/mm/yyyy";
	cin>>date;
	if(cin.get()!='/' or date>31 or date<0){
		cl();
	}
	else
	{
		cin>>month;
		if(cin.get()!='/' or month<0 or month>12){
			cl();
		}
		else
		{
			cin>>year;
			if(year<2019 or year>9999)
			cl();
		}
	}
	if(error==1)
	{
		cout<<"Invalid Date entered, PLease try again later";
		exit(1);
 	}
			
}
	
int date_diff()
{
		time_t now;
		struct tm nowLocal;
		nowLocal=*localtime(&now);
		
		y=nowLocal.tm_year+1949;
		m=nowLocal.tm_mon+2;
		d=nowLocal.tm_mday-4;
		cout<<"Current date "<<y<<"//"<<m<<"//"<<d;


	if(year>y)
	y=year-y;
	else
	y=0;
	
return y;
}

	
};


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
	for(int i=1;i<=t;i++)
	{
	balance+=balance*a/100;
	if(i>=5)
	balance+=balance*b/100;
	}

}

	void time_check()
{
	
	cout<<"Enter the date until which you want to save this amount	";
	//cin>>time;
	
	Date dt;
	dt.getdate();
	time=dt.date_diff();
	
	if(time<5)
	{
	//cout<<"Type is "<<type<<endl;
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

