#include<stdio.h>
#include<regex>
#include<string.h>
#include<typeinfo>
#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	int d;
	regex r2("[0-9]+");
	bool match;
	char a[]={'a'};
	char b='a';
	float c=9.09;
	cout<<typeid(a).name();
	cout<<typeid(c).name();
	if(strcmp(typeid(a).name(),"i")==0 or strcmp(typeid(a).name(),"f")==0)
	cout<<"Damn";
	else
	cout<<"Correct";
	match=regex_match(a,r2);
	if(!match)
	{
		cout<<"Integer dalo";
	}

///if(scanf("%d",&d)==1)
//cout<<"Invalid Input";
//else
cout<<"Good";
int y=1;
cout<<scanf("%c",&y);
}



