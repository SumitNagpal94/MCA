#include<iostream>
#include<string.h>
using namespace std;

class Concat
{
char str[20],st[10];

public:
	void getdata()
	{
		cout<<"Enter the string"<<endl;
		cin>>str;
		cout<<"Enter the string that need to be concatenated "<<endl;
		cin>>st;
	}
	void concat()
	{
		int i;
		while(str[i]!='\0')
		i++;
		str[i]=' ';
		for(int k=i+1,j=0;j<strlen(st);j++,k++)
		{
		str[k]=st[j];
		}
	cout<<str;
	}
};

int main()
{
	Concat c1;
	c1.getdata();
	c1.concat();
	return 0;
}
