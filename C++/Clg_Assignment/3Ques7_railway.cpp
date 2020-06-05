#include<string.h>
#include<iostream>
using namespace std;

int error;
void cl()
			{
			cin.clear();
			cin.ignore(10000, '\n'); 
			cout<<"\nInvalid Format, Please try again\n";
			error=1;
			}
			
class Railway
{
	int hour,min,sec;
	
	public:
		void getdata()
		{
			cout<<"Enter the time in HH:MM:SS Format"<<endl;
			cin>>hour;
			if(cin.get()!=':' or hour>24 or hour<0){
			cl();
		}
		else
		{
		cin>>min;
		if(cin.get()!=':' or min<0 or min>60){
			cl();
		}
		else{
			cin>>sec;
			if(sec<0 or sec>60){
			cl();
		}
		}
		}
		if(error==1)
		{
			getdata();
		}
	}
	int gethour()
	{return hour;
	}
	int getmin()
	{return min;
	}
	int getsec()
	{return sec;
	}
};


class Civil
{
int hour,min,sec;
char ap[5];

public:
	
Civil(Railway R)
{
hour=R.gethour();
min=R.getmin();
sec=R.getsec();
if(hour>12)
{
hour-=12;
strcpy(ap,"p.m.");
}
else
strcpy(ap,"a.m.");
}
Civil()
{
}
void showdata()
{
cout<<"Time is "<<hour<<":"<<min<<":"<<sec<<" "<<ap;
}
};



int main()
{
	Railway r;
	r.getdata();
	Civil c;
	c=r;
	c.showdata();
	return 0;

}
