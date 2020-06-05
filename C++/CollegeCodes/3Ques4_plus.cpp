#include<iostream>
using namespace std;

class Plusplus
{
int number;

public:
	
void getdata()	
{
	cout<<"Enter the number "<<endl;
	cin>>number;
}
void showdata()	
{
	cout<<"Resultant Value is "<<number<<"\n"<<endl;
}
void operator ++()
{
	cout<<"\nNumber after ++number is "<<++number<<endl;
}

void operator ++(int )
{
	cout<<"\n\n Number after number++ is "<<number++<<endl;
}

};

int main()
{
	Plusplus a;
	a.getdata();
	++a;
	a.showdata();
	a++;
	a.showdata();
	return 0;
}
