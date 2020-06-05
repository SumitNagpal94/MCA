#include<iostream>
using namespace std;

int a[5];

template <class A>
void sort(A a[],int n)
{
	int gap=n/2;
	while(gap>=1)
	{
		for(int i=gap;i<=n-1;i++)
		{
			int x=a[i];
			int j=i;
			while(j>=gap and a[j-gap]>a[gap])
			{
				a[j]=a[j-gap];
				j=j-gap;
			}
			a[j]=x;
		}
		gap=gap/2;
	}
		if(gap<=0)
		for(int i=0;i<5;i++)
		cout<<a[i]<<endl;
}
int main()
{
	cout<<"Enter numbers";
	for(int i=0;i<5;i++)
	cin>>a[i];
	int n=5;
	sort(a,n);
}
