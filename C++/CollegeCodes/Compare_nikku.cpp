#include<iostream>
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
	int operator<(Compare str2)
	{
		int i=0;
		while(str[i]!='\0' ||str[i]!='\0' )
		{
		if(str[i]<=str2.str[i])
		{
		if(!(str[i]!='\0' && str[i]!='\0'))
		i++;
		else
		return 0;
		}
		else
		return 0;
		}
		return 1;
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
		while(str[i]!='\0' ||str[i]!='\0' )
		{
		if(str[i]>=str2.str[i])
		{
		if(!(str[i]!='\0' && str[i]!='\0'))
		i++;
		else
		return 0;
		}
		else
		return 0;
		}
		return 1;
	}
};
int Compare::j=1;

int main()
{
	Compare str1,str2;
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
	return 0;
}
