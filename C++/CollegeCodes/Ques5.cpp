#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Time
{
int time,hour,min;

public:
	void input()
	{
	cout<<"Enter the time2 in hour format (HH:MM)\n";
	cin>>hour;
	cout<<":";
	cin>>min;
	}
	
	void gettime(int h,int m)
	{
		hour=h;
		min=m;
	}	
	
	Time &sum(Time &a,Time &b)
	{
	Time t;
	t.hour=a.hour+b.hour;
	t.min=a.min+b.min;
	
	if(t.min>=60)
	{
		do
		{
			t.min-=60;
			t.hour=t.hour+1;
			
		}while(time>=60);
	}
	if(t.hour>23)
	cout<<"Time exceed for more than 1 day\n";
	return t;
	}
	
	void display()
	{
		cout<<"Resultant Time is: "<<hour<<":"<<min;	
	}
};


int main()
{
	int h,m;
	cout<<"Enter the time1 in hour format (HH:MM)\n";
	cin>>h;
	cout<<":";
	cin>>m;
	Time tm,tm1;
	tm.gettime(h,m);
	tm1.input();
	Time x=tm.sum(tm,tm1);
	x.display();
	return 0;
}
