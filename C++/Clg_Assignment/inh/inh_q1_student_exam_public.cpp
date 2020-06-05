#include<iostream>
using namespace std;

class student
{
int rollno;
char name[10],course[10];

public:
	void input_student()
	{
	cout<<"Enter the student name\n";
	cin>>name;	//cin.getline(name,10);
	cout<<"Enter the student Roll No\n";
	cin>>rollno;
	cout<<"Enter the student Course name\n";
	cin>>course; //cin.getline(course,10);
	}	
	void display_student()
	{
	cout<<"\n\n\nName of student is "<<name;
	cout<<"\nRoll no of student is "<<rollno;
	cout<<"\nCourse of student is "<<course;
	}
};
class exam:public student
{
	int marks1,marks2,marks3;
	
	public:
		
	void input_marks()
	{
		input_student();
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

	void display_result()
	{
		input_marks();
		display_student();
		cout<<"\nMarks of Sub 1 "<<marks1;
		cout<<"\nMarks of Sub 2 "<<marks2;
		cout<<"\nMarks of Sub 3 "<<marks3;
		cout<<"\nAverage Marks "<<(marks1+marks2+marks3)/3<<"\n\n\n";
	}
		
};

int main()
{
	exam ex[5];
	for(int i=0;i<5;i++)
	ex[i].display_result();
	
	return 0;
}
