#include<stdio.h>
#include<iostream>
using namespace std;

int i,max;

class Student
{
int rollno,marks1,marks2,marks3,total,average,max;
char name[15];

public:

void getdata()
{

	cout<<"Enter the "<<i+1<<" student name \n";
	cin>>name;
	cout<<"Enter the "<<i+1<<" student rollno \n";
	cin>>rollno;
	cout<<"\nEnter the value for maximum marks\n";
	cin>>max;
	do
	{
	cout<<"Enter the "<<i+1<<" student marks1 \n";
	cin>>marks1;
	cout<<"Enter the "<<i+1<<" student marks2 \n";
	cin>>marks2;
	cout<<"Enter the "<<i+1<<" student marks3 \n";
	cin>>marks3;
	}while(marks1>max||marks2>max||marks3>max);
	total=marks1+marks2+marks3;
	average=(total*100)/(max*3);
}

void displaydata()	
{
	
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
	
	cout<<"\n\nEnter Student Details\n\n";
	
	for(i=0;i<n;i++)
	{
	cout<<"\n\n";
	stud[i].getdata();
	}
	cout<<"\n\nStudent Details\n";	
	for(i=0;i<n;i++)
	{
	cout<<"\n\n";
	stud[i].displaydata();
	}
	
return 0;
}
