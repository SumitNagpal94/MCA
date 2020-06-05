#include<stdio.h>
#include<iostream>
using namespace std;
class overload
{	
	int num;
	
	public:
		void getdata()
		{
			cout<<"Enter the number\n";
			cin>>num;	
		}
		void operator !()
		{
			if(num%2==0)
			cout<<"\nNumber is Even"<<endl;
			else
			cout<<"\nNumber is Odd"<<endl;
		}
		
		void operator --()
		{
			int a;
			for(int i=2;i<=num/2;i++)
			if(num%i==0)
			a=1;
			if(a==1)
			cout<<"Number is Non-Prime";
			else
			cout<<"Number is Prime";
		}
		
		
};
int main()
{
	overload ov;
	ov.getdata();
	!ov;
	--ov;
	//ov.operator!();

return 0;
}
