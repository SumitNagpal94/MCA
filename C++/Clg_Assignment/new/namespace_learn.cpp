#include<iostream>
using namespace std;

namespace New
{
	int a;
	int func(int,int);
}

	int New::func(int a,int b)
	{
		cout<<"Entered a and b";
		cout<<a<<endl<<b<<endl;
	}
int main()
{
	New::a=10;

	using namespace New;
	cout<<a;
	func(13,21);
	return 0;
}
