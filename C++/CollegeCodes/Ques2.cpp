#include<conio.h>
#include <regex>
using namespace std;
#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
#include <boost/algorithm/string.hpp>
using namespace std;

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
	string time;
	int hour,min,sec;
	regex integer("[[:digit]]+[[:digit]]+[[:digit]]");
	cout<<"Enter the time in HH:MM:SS Format"<<endl;
	while(1)
	{
		cin>>time;
		if(regex_match(time,integer))
		cout<<"Helo";
	}
	/*cin>>hour;
	cout<<":\n";
	cin>>min;
	cout<<":\n";
	cin>>sec:*/
 
    vector<int> result; 
    boost::split(result, integer, boost::is_any_of(":"));
  	
	hour=result[0];
	min=result=[1];
	sec=result[2];	
	Time tm;
	tm.hms_to_secs(hour,min,sec);
}
