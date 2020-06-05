#include<iostream>
#include<string.h>
using namespace std;

class Substring
{
char str[20],st[5];

public:
	void getdata()
	{
		cout<<"Enter the string "<<endl;
		cin>>str;
		cout<<"Enter the substring that need to be searched"<<endl;
		cin>>st;
	}
	void compare()
	{
		int i;
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]==st[0])
			break;
			else
			{
			cout<<"Substring is not present in entered String";
			exit(1);
			}
		}
		int match=i,j;
		for(i=match,j=0;j<strlen(st);i++,j++)
		{
			if(str[i]!=st[j] )
			break;
		}
		if(i==strlen(st))
		cout<<"Substring found at "<<match<<" position";
		else
		cout<<"Substring not found";
	}
};

int main()
{
	Substring s1;
	s1.getdata();
	s1.compare();
	return 0;
}
