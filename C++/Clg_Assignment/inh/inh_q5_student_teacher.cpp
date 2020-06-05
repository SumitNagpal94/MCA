#include<string.h>
#include<iostream>
using namespace std;

int error;
void cl()
			{
			cin.clear();
			cin.ignore(10000, '\n'); 
			cout<<"\nInvalid Format, Please try again\n";
			error=1;
			}



class user
{
char name[10];
int age;

public: 

user()
{
}
user(char n[10],int r)
{
strcpy(n,name);
age=r;
}

void user_display()
{
cout<<"Name of the user is: "<<name<<endl;
cout<<"Age of the user is: "<<age<<endl;
}

};

class Student:public user
{
	int rollno,marks1,marks2,marks3;
	char course[10];
	public:
	void getdata()
	{
	do
	{
	cout<<"Enter the student Roll No\n";
	cin>>rollno;
	}while(rollno<0 or rollno>10000);
	cout<<"Enter the student Course name\n";
	cin>>course; //cin.getline(course,10);
		do
		{
		cout<<"Enter the marks of Sub 1\n";
		cin>>marks1;
		}while(marks1<0 or marks1>100);	
		do
		{
		cout<<"Enter the marks of Sub 2\n";
		cin>>marks2;
		}while(marks2<0 or marks2>100);
		do
		{
		cout<<"Enter the marks of Sub 3\n";
		cin>>marks3;
		}while(marks3<0 or marks3>100);
	
	}
	void display_data()
	{
	user_display();
	cout<<"Course of student is "<<course;
	cout<<"\nRoll no of student is "<<rollno;
	cout<<"\nMarks of Sub 1 "<<marks1;
	cout<<"\nMarks of Sub 2 "<<marks2;
	cout<<"\nMarks of Sub 3 "<<marks3;
	cout<<"\nPercentage is "<<float((marks1+marks2+marks3)/3)<<"\n\n\n";
	}
	
	Student(char a[10],int b):user(a,b)
		{
			getdata();
			display_data();
		}

};

class Teacher:public user
{
	char subject[10][10];
	int n,hour1,min1,hour2,min2;
	static int i;
	
	public:
		
		void teacher_getdata()
		{
		cout<<"Enter the number of Subjects that teacher teaches\n";
		cin>>n;
		for(int j=0;j<n;j++)
			{
			cout<<"Enter the "<<i<<" Subject Name ";
			cin>>subject[j];
			i++;
			}
		gettime();
		}
		
		void teacher_display()
		{
		user_display();
		cout<<"\nSubjects of the teacher are\n";
		for(int j=0;j<n;j++)
		cout<<subject[j]<<endl;
		cout<<"\nTeacher is available from "<<hour1<<":"<<min1<<" to "<<hour2<<":"<<min2<<endl;
		}
		
		void gettime()
		{
		cout<<"\nEnter the time duration for which teacher is available\n";
		cout<<"From Time:  ";
		cin>>hour1;
		if(cin.get()!=':' or hour1>24 or hour1<0){
		cl();
		}
		else
		{
		cin>>min1;
		if(min1<0 or min1>60)
		cl();
		}
		if(error==1)
		gettime();
	
		
		cout<<"To Time:  ";
		cin>>hour2;
		if(cin.get()!=':' or hour2>24 or hour2<0){
		cl();
		}
		else
		{
		cin>>min2;
		if(min2<0 or min2>60)
		cl();
		}
		if(error==1)
		gettime();
	}
	
		Teacher(char a[10],int b):user(a,b)
		{
			teacher_getdata();
			teacher_display();
		}
};
int Teacher::i=1;

int main()
{
	int age;
	char name[10],type[7];
	cout<<"Enter the name\n";
	cin>>name;
	cout<<"Enter the age\n";
	cin>>age;
	do
	{
	cout<<"\nEnter the Type of User: Student or Teacher\n";
	cin>>type;	
	}while(strcmp(type,"Student") and strcmp(type,"Teacher"));

if(strcmp(type,"Student"))
Teacher t(name,age);
else
Student s(name,age);

return 0;	
}

