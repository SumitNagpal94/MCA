#include<iostream>
using namespace std;

template <class A>
class Sort
{

public:
	
void sort(A a[],int n)
{
	
	int x;
	for(int i=1;i<n;i++)
	{
	x=1;
		for(int j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				x=0;
			}
		
		}
			if(x==1)
			break;
	}
	cout<<"\nValues after sorting are: \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}
};
int main()
{
	Sort <int>s;
	int n;
	cout<<"Enter the total number of Numbers";
	cin>>n;
	int a[n];
	cout<<"Enter numbers\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	s.sort(a,n);
	return 0;
}

