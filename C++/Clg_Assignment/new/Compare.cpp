#include<iostream>
#include<string.h>
using namespace std;

class Compare
{
char str[20];

public:
	static int j;
	void getdata()
	{
		cout<<"Enter the string "<<j<<endl;
		cin>>str;
		j++;
	}
	int max(char str1[],char str2[])
	{
		if(strlen(str1)>strlen(str2))
		return strlen(str1);
		else
		return strlen(str2);
	}
	int operator<(Compare str2)
	{
		int i=0;
		while(max(str,str2.str))
		{
		if(str[i]<str2.str[i])
		return 1;
		else if(str[i]==str2.str[i])
		i++;
		else
		return 0;
		}
	}
	int operator==(Compare str2)
	{
		int i=0;
		while(str[i]!='\0' && str[i]!='\0' )
		{
		if(str[i]==str2.str[i])
		i++;
		else
		return 0;
		}
		return 1;
	}
	int operator>(Compare str2)
	{
		int i=0;
		while(max(str,str2.str))
		{
		if(str[i]>str2.str[i])
		return 1;
		else if(str[i]==str2.str[i])
		i++;
		else
		return 0;
		}
	}
};
int Compare::j=1;

int main()
{
	char c;
	Compare str1,str2;
	do
	{
	str1.getdata();
	str2.getdata();
	if(str1<str2)
	cout<<"String 1 is less than String 2";
	else if(str1==str2)
	cout<<"String1 is equal to String 2";
	else if(str1>str2)
	cout<<"String 1 is greater than String 2";
	else
	cout<<"Somethin went wrong, please try again ";
	
	cout<<"\n\nEnter 0 to stop else any input to continue\n";
	cin>>c;
	cout<<endl;
	}while(c!='0');
	
	return 0;
}
