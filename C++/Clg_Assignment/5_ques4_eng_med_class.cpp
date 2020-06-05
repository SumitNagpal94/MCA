#include<iostream>
using namespace std;

class Student
{	
public:
	virtual void display()=0;
};

class Engineering:public Student
{
public:
void display()
{
cout<<"\nI am Engineering Class";
}

};
class Medicine:public Student
{
public:
void display()
{
cout<<"\nI am Medicine Class";
}

};
class Science:public Student
{
public:
void display()
{
cout<<"\nI am Science Class";
}

};

int main()
{
	Student *s[3];
	
	Engineering e;
	s[0]=&e;
	Medicine m;
	s[1]=&m;
	Science sc;
	s[2]=&sc;
	
	for(int i=0;i<3;i++)
	s[i]->display();
	
	return 0;
}
