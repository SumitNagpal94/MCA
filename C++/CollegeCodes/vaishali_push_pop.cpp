#include<iostream>
using namespace std;
class A
{
int top;
public:
A()
{
	top=-1;
}
class empty
{
};

class full
{
};

void push()
{
	if(top==4)
	throw full();
	else
	top++;
}
void pop()
{
if(top==-1)
throw empty();
else
top--;	
}

};

int main()
{
A a;
try
{
a.push();
a.push();
a.push();
a.push();
a.push();	
}
catch(A::full)
{
cout<<"Full";
}
try
{
a.pop();
a.pop();
a.pop();
a.pop();
a.pop();	
}
catch(A::empty)
{
cout<<"Empty";
}
return 0;
}
