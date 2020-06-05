#include<string.h>
#include<iostream>
using namespace std;

class String
{
	char str[10];
	int c=0;
	int max(char str1[],char str2[])
	{
		if(strlen(str1)>strlen(str2))
		return strlen(str1);
		else
		return strlen(str2);
	}
public:	
	static int i;
	void getdata()
	{
	cout<<"Enter string "<<i+1<<" ";
	cin>>str;
	i++;
	
	}
	
int operator <(String s2)
{
	int b=max(str,s2.str);
	for(int i=0;i<b;i++)
	{
	cout<<"\nCompared "<<str[i]<<" with "<<s2.str[i]<<"\n";
	if(int(str[i])<int(s2.str[i]))
	c=1;
	else
	{
	c=0;
	break;
	}
	}
	if(c==1)
	return 1;
}
int operator ==(String s2)
{
	for(int i=0;i<max(str,s2.str);i++)
	{
	//cout<<"\nCompared "<<str[i]<<" with "<<s2.str[i]<<"\n";
	if(int(str[i])<=int(s2.str[i]))
	c=1;
	else
	{
	c=0;
	break;
	}
	}
	if(c==1)
	return 1;
}
int operator >(String s2)
{
	for(int i=0;i<max(str,s2.str);i++)
	{
	//cout<<"\nCompared "<<str[i]<<" with "<<s2.str[i]<<"\n";
	if(int(str[i])>int(s2.str[i]))
	c=1;
	else
	{
	c=0;
	break;
	}
	}
	if(c==1)
	return 1;
}
};
int String::i=0;
int main()
{
int a=1;
do
{
String s1,s2;
s1.getdata();
s2.getdata();

if(s1<s2)
cout<<"String 1 is less than String 2";
else if(s1==s2)
cout<<"String 1 is equal to String 2";
else if(s1>s2)
cout<<"String 1 is greater than String 2";
else
cout<<"Something went wrong, Please try later";
cout<<"\nContinue";
cin>>a;
}while(a!=0);
}
