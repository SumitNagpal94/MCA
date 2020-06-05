#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int n,temp;
cout<<"Enter total number of values";
int num[n];
cin>>n;

for(int i=0;i<n;i++)
cin>>num[i];

for(int i=0;i<n;i++)
{
if(i%2==0 and num[i]>0)
	continue;
else if(i%2==1 and num[i]<0)
	continue;
else
{
		for(int k=i+1;k<n;k++)
		{
			if(k%2==0 and num[k]<0)
			{
			temp=num[k];
			num[k+1]=num[k];
			num[k]=temp;
			break;
			}
			else if(k%2==1 and num[k]>0)
			{
			temp=num[k];
			num[k+1]=num[k];
			num[k]=temp;
			break;
			}
			else
			continue;
		}
}
}

cout<<"Sorted array is\n";
for(int i=0;i<n;i++)
cout<<num[i];
return 0;
}

