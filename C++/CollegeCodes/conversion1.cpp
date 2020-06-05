#include<iostream>
using namespace std;

class fraction
{
	int num,deno;
	public:
		fraction()
		{
			num=deno=0;
		}
		void getfraction()
		{
			cout<<"enter fraction"<<endl;
			cin>>num>>deno;
		}
		void printfraction()
		{
			cout<<num<<deno;
		}
		operator float()
		{
			float f=float(num)/float(deno);
		}
		
};
int main()
{
	fraction f1;
	f1.getfraction();
	float f;
	f=f1;
	cout<<f;
}
