#include<stdio.h>
#include<iostream>
using namespace std;


class time
{
	public:

	float tme;	
		
	time(int a)
	{
		tme=a;
	}
	operator float()
	{
		tme=int(tme);
	}
};
int main()
{
	int f;
	time t(2);
	f=t.tme;
	cout<<"t= "<<f;
}
