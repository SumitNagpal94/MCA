#include<iostream>
#include<string.h>
using namespace std;

class strin
{
	private:
		char str[10];
		int length;
	public:
		void get()
		{
			cout<<"Enter string"<<endl;
			cin>>str;
		}

	int max(char str1[],char str2[])
	{
		if(strlen(str1)>strlen(str2))
		return strlen(str1);
		else
		return strlen(str2);
	}
		void operator <(strin s)
		{
		int flag=0;
				int i=0,k;
				for(int j=0;i<max(str,s.str);j++)
				{
					if(int(str[i])<=int(s.str[i]))
					flag=1;
					else
					{
					flag=0;
					k=i-1;
					while(k>=0)
					{
					if(int(str[k])<int(s.str[k]))
					flag=1;
					k--;
					}
					break;
					}
					i++;
					if(str[i]=='\0' and s.str[i]=='\0' and int(str[i-1])==int(s.str[i-1]))
					flag=2;
				}
				if(flag==2)
				cout<<"string1 is equal to string2"<<endl;
				else if(flag==1)
				{
					cout<<"string1 is less than string2"<<endl;
				}
				else
				{
					cout<<"string2 is less than string1"<<endl;
				}
		}
};
int main()
{
int a=1;
do
{
	strin s1,s2;
	s1.get();
	s2.get();
	s1<s2;
	cout<<"Continue";
	cin>>a;
}
while(a!=1);
return 0;
}
