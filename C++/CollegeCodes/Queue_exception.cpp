#include<iostream>
using namespace std;
#define MAX 5

template <class A>
class Queue
{
int front=-1,end=MAX,a[5];

public:

void insert(int x)
{
try
{
if(front==end-1)
throw 1;
else
a[++front]=x;
}
catch(int)
{
cout<<"Queue is full ";
}
}

void del()
{
try
{
if(end==-1)
{
throw 'a';
}
else
{
cout<<"Deleted Element is "<<a[0]<<endl;
for(int i=0;i<=front;i++)
{
a[i]=a[i+1];
}
front--;
end--;
}
}
catch(char)
{
cout<<"\nQueue already Empty ";
}

}

void display()
{
	for(int i=0;i<=front;i++)
	cout<<a[i]<<endl;
}

};

int main()
{
	Queue <int>q;
	int a,b=-1;
	cout<<"Enter the number that need to be put in Queue ";
	cin>>a;
	q.insert(a);
	
	while(1)
	{
	cout<<"\nPress -1 to stop else Enter new number ";
	cin>>b;
	if(b==-1)
	break;
	q.insert(b);
	}
	while(1)
	{
	cout<<"\nDo you want to delete element (press 0 to stop else any other digit) ";
	cin>>b;
	if(b==0)
	break;
	q.del();
	}

	cout<<"\nElements of Queue is \n";
	q.display();
}
