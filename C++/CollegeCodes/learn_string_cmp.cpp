#include<string.h>
#include<iostream>
using namespace std;


class test
{

public:
char str[10];
	
	void getdata()
	{
		cout<<"ENter";
		cin.getline(str,15);
	}
};
int main()
{
	test a,b;
	a.getdata();
	b.getdata();
	int A;
	char B[10];
	if(strlen(a.str)<strlen(b.str))
	strcpy(B,b.str);
	else
	strcpy(B,a.str);
	for(int i=0;i<strlen(B);i++)
	{
		
		if(a.str[i]==b.str[i])
		A=1;
		else
		A=0;
	}
	if(A==1)
		cout<<"Equal";
		else
		cout<<"Not equal";
}
