#include<string.h>
#include<iostream>
using namespace std;

class A
{
	char name[5];
	
	public:
		void d()
		{
			cout<<"\nH\nE\nY\n"<<name<<endl;
		}
	A(char s[5])
	{
	strcpy(s,name);
	}
};
int main()
{
	char name[5];
	cout<<"Enter name: \n";
	cin>>name;
	A a(name);
	a.d();
	return 0;
}
