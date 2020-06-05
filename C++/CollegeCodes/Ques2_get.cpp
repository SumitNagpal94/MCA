#include<conio.h>
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

class Time
{
	public:
	int seconds;
	int hms_to_secs(int,int,int);
};

int Time::hms_to_secs(int hour,int min,int sec)
{

	if(hour>23||min>59||sec>59)
	cout<<"Invalid Time Entered";
	else
	{
	seconds=hour*60*60+min*60+sec;
	cout<<"Seconds for time entered is: "<<seconds<<endl;
	}
}

int main()
{	
	int hour,min,sec,error;
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
		main();
	}
	Time tm;
	tm.hms_to_secs(hour,min,sec);
}
