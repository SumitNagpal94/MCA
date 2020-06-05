#include<string.h>
#include<iomanip>
#include<iostream>
using namespace std;

int x;

class student
{
	protected:
	char name[10];
	int rollno;
	
	public:
	
	void get()
	{
		cout<<"\n\nEnter name ";
		cin>>name;
		cout<<"\nEnter roll no ";
		cin>>rollno;
	}
	
	string display()
	{
	return name;
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
		int display_marks()
		{
		return rollno;
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
	char res[5];
	if((total/2)<40)
	strcpy(res,"FAIL");
	else
	strcpy(res,"PASS");
	return res;
	}
Result()
{
	total=0;
}
void result()
{
	if(i==1)
	{
	cout<<"\n\n";
	std::cout<<std::setw(15)<<std::right<<"Name"<<std::setw(15)<<std::right<<"Rollno"<<std::setw(15)<<std::right<<"Marks1"<<std::setw(15)<<std::right<<"Marks2"<<std::setw(15)<<std::right<<"Total"<<std::setw(15)<<std::right<<"Result"<<std::endl;
	std::cout<<std::setw(15)<<std::right<<"-----"<<std::setw(15)<<std::right<<"-----"<<std::setw(15)<<std::right<<"-----"<<std::setw(15)<<std::right<<"-----"<<std::setw(15)<<std::right<<"-------"<<std::setw(15)<<std::right<<"-------"<<std::endl;
	}
	std::cout<<std::setw(15)<<std::right<<display()<<std::setw(15)<<std::right<<display_marks()<<std::setw(15)<<std::right<<marks1<<std::setw(15)<<std::right<<marks2<<std::setw(15)<<std::right<<call_result()<<std::setw(15)<<std::right<<display_result()<<std::endl;
	i++;
}
};
int Result::i=1;
int main()
{
	cout<<"Enter number of students of which record is to be saved ";
	cin>>x;
	Result r[x];
	for(int y=0;y<x;y++)
	{
	r[y].get();
	r[y].get_marks();
	r[y].call_result();
	}
	
	for(int y=0;y<x;y++)
	r[y].result();
	
	return 0;
}
