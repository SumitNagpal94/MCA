#include<iomanip>
#include<iostream>
using namespace std;

class student
{
	char name[10];
	int rollno;
	
	public:
	
	void get()
	{
		cout<<"Enter name ";
		cin>>name;
		cout<<"\nEnter roll no ";
		cin>>rollno;
	}
	
	void display()
	{
		cout<<"\nName is "<<name;
		cout<<"\nRoll No is "<<rollno;
	}
};
class Mark: public student
{
	protected:
		int marks1,marks2;
		
	public:
		void get_marks()
		{
			cout<<"\nEnter the first subject marks ";
			cin>>marks1;
			cout<<"Enter the second subject marks ";
			cin>>marks2;
		}
		void display_marks()
		{
			cout<<"\nFirst subject marks "<<marks1<<endl;
			cout<<"Second subject marks "<<marks2<<endl;
		}
};
class Result: public Mark
{


float total;
public:
	
static int i;

	int call_result()
	{
	total=marks1+marks2;	
	return total;
	}	
	
	string display_result()
	{
	if((total/2)<40)
	return "FAIL";
	else
	cout<<"PASS";
	}
Result()
{
	total=0;
	get();
	get_marks();
	call_result();
	if(i==1)
	{
	std::cout<<std::setw(15)<<std::right<<"Name"<<std::setw(15)<<std::right<<"Rollno"<<std::setw(15)<<std::right<<"Marks1"<<std::setw(15)<<std::right<<"Marks2"<<std::setw(15)<<std::right<<"Result"<<std::endl;
	std::cout<<std::setw(15)<<std::right<<"-----"<<std::setw(15)<<std::right<<"------"<<std::setw(15)<<std::right<<"------"<<std::setw(15)<<std::right<<"-------"<<std::setw(15)<<std::right<<"-------";
	}
	std::cout<<std::setw(15)<<std::right<<"Name"<<std::setw(15)<<std::right<<"Rollno"<<std::setw(15)<<std::right<<"Marks1"<<std::setw(15)<<std::right<<"Marks2"<<std::setw(15)<<std::right<<"Result"<<std::endl;
	i++;
	display();
	display_marks();
	display_result();
}
};
int Result::i=1;
int main()
{
	int x;
	cout<<"Enter number of students of which record is to be saved ";
	cin>>x;
	for(int y=1;y<=x;y++)
	Result r[y];	
	return 0;
}
