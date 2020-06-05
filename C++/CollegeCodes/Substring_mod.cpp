#include<iostream>
#include<string.h>
using namespace std;

class Substring
{
char str[20],st[10];

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
		int j,n=0;
		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]==st[0])
			{
			 int match=i,k;
			
				for(k=match,j=0;j<strlen(st);k++,j++)
				{
					if(str[k]==st[j] )
					continue;
					else
					break;
				}
				
				if(j==strlen(st))
				{
				n++;
				cout<<"Substring found at "<<match<<" index"<<endl;
				}
			}
		}
				if(n==0)
				cout<<"Substring not present in Entered String";
				cout<<"\nTotal Match Found "<<n;
	}
};

int main()
{
	Substring s1;
	s1.getdata();
	s1.compare();
	return 0;
}
