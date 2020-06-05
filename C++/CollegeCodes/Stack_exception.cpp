#include<iostream>
using namespace std;
#define MAX 5

template <class A>
class stack
{
int top=-1,a[5];

public:

void push(int x)
{
try
{
if(top==MAX-1)
throw 1;
else
a[++top]=x;
}
catch(int)
{
cout<<"Stack is full ";
}
}

void pop()
{
try
{
if(top==-1)
{
throw 'a';
}
else
{
cout<<"Poped Element is "<<a[top--]<<endl;
}
}
catch(char)
{
cout<<"\nStack already Empty ";
}

}

void display()
{
	for(int i=top;i>=0;i--)
	cout<<a[i]<<endl;
}

};

int main()
{
	stack <int>s;
	int a,b=-1;
	cout<<"Enter the number that need to be put in stack ";
	cin>>a;
	s.push(a);

	while(1)
	{
	cout<<"\nPress -1 to stop else Enter new number ";
	cin>>b;
	if(b==-1)
	break;
	s.push(b);
	}
	while(1)
	{
	cout<<"\nDo you want to pop element (press 0 to stop else any other digit) ";
	cin>>b;
	if(b==0)
	break;
	s.pop();
	}

	cout<<"\nElements of stack is \n";
	s.display();
}
