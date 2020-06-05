#include<iostream>
using namespace std;

int a[5],top=-1,length;

template <class A>
A stack(A n)
{
if(top!=length-1)
{
a[++top]=n;	
}	
else
cout<<"\nStack Full";
}

void pop()
{
	for(int i=length-1;top!=-1;i--)
	{
	cout<<a[top]<<endl;
	top--;
	}
}
int main()
{
	cout<<"Enter length of Stack ";
	cin>>length;
	for(int n=0;n<=length-1;n++)
	{
	cout<<"Enter Value: ";
	cin>>a[n];
	stack(a[n]);
	}
	cout<<"\nValues poping after being in stack\n";
	for(int i=0;i<length;i++)
	pop();
}
