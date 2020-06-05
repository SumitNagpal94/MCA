#include<string.h>
#include<iomanip>
#include<iostream>
using namespace std;

int x;

class student
{
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
	
	/*void display()
	{
		cout<<"\nName is "<<name;
		cout<<"\nRoll No is "<<rollno;
	}*/
	char* getname()
		{
			return name;
		}
	int getrollno()
		{
			return rollno;
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
		/*void display_marks()
		{
			cout<<"\nFirst subject marks "<<marks1<<endl;
			cout<<"Second subject marks "<<marks2<<endl;
		}*/
		int getmarks1()
		{
			return marks1;
		}
		int getmarks2()
		{
			return marks2;
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
	std::cout<<std::setw(15)<<std::right<<getname()<<std::setw(15)<<std::right<<getrollno()<<std::setw(15)<<std::right<<getmarks1()<<std::setw(15)<<std::right<<getmarks2()<<std::setw(15)<<std::right<<call_result()<<std::setw(15)<<std::right<<display_result()<<std::endl;
	i++;
}
};
int Result::i=1;
int main()
{
	cout<<"Enter number of students of which record is to be saved ";
	cin>>x;
	cout<<"Value of x is "<<x<<endl;
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
