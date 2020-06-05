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
	}
	
	void display()
	{
	}

};
class Mark: public student
{
	protected:
		int marks1,marks2;
		
	public:
		void get()
		{
		}
		void display()
		{
		}
		
};
class Result: public Mark
{

float total;
public:
	
static int i;

	int get()
	{
			cout<<"\n\nEnter name ";
			cin>>name;
			cout<<"\nEnter roll no ";
			cin>>rollno;
			cout<<"\nEnter the first subject marks ";
			cin>>marks1;
			cout<<"Enter the second subject marks ";
			cin>>marks2;
			total=marks1+marks2;
	}	
	
	void display()
   	{
	char res[5];
	if((total/2)<40)
	strcpy(res,"FAIL");
	else
	strcpy(res,"PASS");
	if(i==1)
	{
	cout<<"\n\n";
	std::cout<<std::setw(15)<<std::right<<"Name"<<std::setw(15)<<std::right<<"Rollno"<<std::setw(15)<<std::right<<"Marks1"<<std::setw(15)<<std::right<<"Marks2"<<std::setw(15)<<std::right<<"Total"<<std::setw(15)<<std::right<<"Result"<<std::endl;
	std::cout<<std::setw(15)<<std::right<<"-----"<<std::setw(15)<<std::right<<"-----"<<std::setw(15)<<std::right<<"-----"<<std::setw(15)<<std::right<<"-----"<<std::setw(15)<<std::right<<"-------"<<std::setw(15)<<std::right<<"-------"<<std::endl;
	}
	std::cout<<std::setw(15)<<std::right<<name<<std::setw(15)<<std::right<<rollno<<std::setw(15)<<std::right<<marks1<<std::setw(15)<<std::right<<marks2<<std::setw(15)<<std::right<<marks1+marks2<<std::setw(15)<<std::right<<res<<std::endl;
	i++;

	}

Result()
{
	total=0;
}
};
int Result::i=1;
int main()
{
	cout<<"Enter number of students of which record is to be saved ";
	cin>>x;
	Result r[x];
	for(int y=0;y<x;y++)
	r[y].get();
	
	for(int y=0;y<x;y++)
	r[y].display();
	
	return 0;
}
