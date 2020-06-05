#include<string.h>
#include<iostream>
using namespace std;

class university
{
protected:
	
char nameu[20],dept[10],per[10];
int num;

void getundata()
{
	cout<<"Enter the name of the university: ";
	cin>>nameu;
	cout<<"Enter the Selected Department  ";
	cin>>dept;
	cout<<"Enter the Assigned Person  ";
	cin>>per;
}
virtual void display()=0;
};

class company
{
protected:
	
char namec[20];
int eng,amount;

void getcomdata()
{
	cout<<"Enter the name of the company: ";
	cin>>namec;
	cout<<"Enter the number of Engineers  ";
	cin>>eng;
	cout<<"Enter the amount of the project  ";
	cin>>amount;
}
virtual void display()=0;
};

class project:protected university,protected company
{
	char type[10];
	int duration,amountg;
	
public:
	void getdata()
	{
	do
	{
	cout<<"Enter the type of Project (University/Company)";
	cin>>type;
	}while(strcmp(type,"University") and strcmp(type,"Company"));
	if (strcmp(type,"Company")==0)
		getcomdata();
	else
		getundata();
	cout<<"Enter the Time Duration of Project (In years) ";
	cin>>duration;
	cout<<"Enter the Amount Granted for Project ";
	cin>>amountg;
	}
	void display()
	{
	if (strcmp(type,"Company"))
	{
	cout<<"\nName of the university: "<<nameu;
	cout<<"\nSelected Department is "<<dept;
	cout<<"\nAssigned Person  "<<per;
	}
	else
	{
	cout<<"\nName of the company: "<<namec;
	cout<<"\nNumber of Engineers is "<<eng;
	}
	cout<<"\nTime Duration of Project: "<<duration<<" years";
	cout<<"\nAmount granted for project: "<<amountg;
	if (strcmp(type,"Company")==0 && amount>amountg)
	cout<<"\nWe regret to inform you that Amount Granted is less than Required amount";
	else
	cout<<"\nCongratulations you got the required amount";
	}

}; 
int main()
{
	project p;
	p.getdata();
	p.display();
}
