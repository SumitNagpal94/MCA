#include<stdio.h>
#include<iostream>
#include<regex>
#include<iomanip>
#include<typeinfo>
using namespace std;

int i;
class Student
{
char rollno[10];
int marks1,marks2,marks3,total,average;
char name[15];

public:

void getdata()
{
		regex alpha("[a-zA-Z ]+");
		regex n("[[:digit:]]+");
		
	cout<<"\nEnter Student Details\n";
	do
	{
	cout<<"Enter the "<<i+1<<" student name \n";
	cin>>name;
	}while(!(regex_match(name,alpha)));
	do{
	cout<<"Enter the "<<i+1<<" student rollno \n";
	cin>>rollno;
	fflush(stdin);
	regex r2("[0-9]+");
	}while(!regex_match(rollno,n));
	fflush(stdin);
	cout<<"Enter the "<<i+1<<" student marks1 \n";
	cin>>marks1;
	cout<<"Enter the "<<i+1<<" student marks2 \n";
	cin>>marks2;
	cout<<"Enter the "<<i+1<<" student marks3 \n";
	cin>>marks3;
	total=marks1+marks2+marks3;
	average=total/3;
}

void displaydata()	
{
	cout<<"\nStudent Details\n";
	cout<<"\n"<<i+1<<" student name \n"<<name;
	cout<<"\n"<<i+1<<" student rollno \n"<<rollno;
	cout<<"\n"<<i+1<<" student marks1 \n"<<marks1;
	cout<<"\n"<<i+1<<" student marks2 \n"<<marks2;
	cout<<"\n"<<i+1<<" student marks3 \n"<<marks3;
	cout<<"\n"<<i+1<<" Student Total marks \n"<<total;
	cout<<"\n"<<i+1<<" Student Average marks \n"<<average;

}


};


int main()
{
	int n;
	cout<<"Enter the number of students\n";
	cin>>n;
	
	Student stud[n];
	
	for(i=0;i<n;i++)
	{
	cout<<"\n\n";
	stud[i].getdata();
	}
	
	for(i=0;i<n;i++)
	{
	cout<<"\n\n";
	stud[i].displaydata();
	}
	
return 0;
}
