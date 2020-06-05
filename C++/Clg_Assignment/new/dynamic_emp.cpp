#include<iostream>
using namespace std;

class Employee
{
	char name[10];
	
	public:
	void getdata()
	{
	cout<<"Enter name ";
	cin>>name;
	}
	void displaydata()
	{
	cout<<"Name "<<name<<endl;
	}
};
int main()
{
	Employee *emp[10];
	for(int i=0;i<10;i++)
	{
	emp[i]=new Employee;
	emp[i]->getdata();
	}
	for(int i=0;i<10;i++)
	emp[i]->displaydata();
	return 0;
}





