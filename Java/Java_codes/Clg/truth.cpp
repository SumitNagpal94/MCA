#include<iostream>
#include<math.h>
using namespace std;
void printruthtable(int n);
int main()
{
	int n;
	cin>>n;
	printruthtable(n);
	return 0;
}
void printruthtable(int n)
{

	char *a=new char[n];
	for(int i=0;i<=n-1;i++)
		a[i]='f';
	for(int i=0;i<pow(2,n)-1;i++)
	{
		int j=n-1;
		int k=i;
		while(k!=0)
		{
			if(k%2==1)
			{
				a[j]='t';
			}
			else
				a[j]='f';
			j=j-1;
			k=k/2;
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i];
}
