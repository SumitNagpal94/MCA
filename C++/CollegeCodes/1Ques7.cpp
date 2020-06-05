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
int mark[3],total,average;
char name[15];

public:

void getdata()
{
	bool match;
	do{
	cout<<"Enter name:";
	fflush(stdin);
	cin.getline(name,25);
	fflush(stdin);
	regex r1("[a-zA-Z ]+");
	match=regex_match(name,r1);
	if(match==false)
		cout<<"\nError! enter again(characters only!) \n";
	}while(match==false);
	

	do{
	cout<<"Enter rollno.(4 digit only):";
	cin>>rollno;
	fflush(stdin);
	regex r2("[0-9]+");
	 match=regex_match(rollno,r2);
	cout<<"\nMatch Value is"<<match<<endl;
	if(!match or strlen(rollno)>4)
		cout<<"\nError!\n";
	
	}while(!match or strlen(rollno)>4);
	
		
	do{
	cout<<"enter marks of sub1:";
	cin>>mark[0];
	if(mark[0]<0 or mark[0]>100)
	cout<<"\nError marks should be between 0 and 100\n";
	}while(mark[0]<0 or mark[0]>100);
	
	do{
	cout<<"enter marks of sub2:";
	cin>>mark[1];
	if(mark[1]<0 or mark[1]>100)
	cout<<"\nError marks should be between 0 and 100\n";
    }while(mark[1]<0 or mark[1]>100);
	
		
	do{
	cout<<"enter marks of sub3:";
	cin>>mark[2];
	if(mark[2]<0 or mark[2]>100)
	cout<<"\nError marks should be between 0 and 100\n";	
	}while(mark[2]<0 or mark[2]>100);
	
		
	total=mark[0]+mark[1]+mark[2];
	average=total/3;
}


void displaydata()	
{
	cout<<"\nStudent Details\n";
	cout<<"\n"<<i+1<<" student name \n"<<name;
	cout<<"\n"<<i+1<<" student rollno \n"<<rollno;
	cout<<"\n"<<i+1<<" student marks1 \n"<<mark[0];
	cout<<"\n"<<i+1<<" student marks2 \n"<<mark[1];
	cout<<"\n"<<i+1<<" student marks3 \n"<<mark[2];
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
