#include<string.h>
#include<iostream>
using namespace std;

class student
{
int rollno;
char name[15];

public:

void get_details()
{
cout<<"Enter the Name of Student ";
cin>>name;
cout<<"Enter the Rollno of Student ";
cin>>rollno;
}

void display_details()
{
cout<<"\nName of Student "<<name;
cout<<"\nRollno of Student is "<<rollno;
}

};

class Examination:protected student
{
protected:
int test1,test2,avg;

void call_average()
{
get_details();
do
{
cout<<"Enter Test1 Marks ";
cin>>test1;
}while(test1<0 or test1>100);
do
{
cout<<"Enter Test2 Marks ";
cin>>test2;
}while(test2<0 or test2>100);
avg=(test1+test2)/2;
}

void display_average()
{
	display_details();
	cout<<"\nMarks obtained in Test1 is "<<test1;
	cout<<"\nMarks obtained in Test2 is "<<test2;
	cout<<"\nAverage marks of the Student is "<<avg;
}
};

class Extracurricular:protected student
{
protected:
char extra[5];
int painting,music;
	
void getscore()
{
cout<<"Enter the marks obtained in Painting ";
cin>>painting;	
cout<<"Enter the marks obtained in Music ";
cin>>music;
}

void display_total()
{
cout<<"\nMarks obtained in Painting "<<painting;	
cout<<"\nMarks obtained in Music "<<music;
}
	
};

class Result:protected Examination,protected Extracurricular 
{
int total;

public:

void cal_total()
{
call_average();
do
{
cout<<"\nWhether you opted for Extra curricular activities (Yes/No) ";
cin>>extra;
}while(strcmp(extra,"Yes") and strcmp(extra,"No") );

if(strcmp(extra,"Yes")==0)
{
getscore();
total=((avg*2)+painting+music)/4;
}

}

void comment()
{

	display_average();
	if(strcmp(extra,"Yes")==0)
	{
	display_total();
	cout<<"\nPercentage is "<<total;
	}
	if(total>40)
	cout<<"\nCongratulations you have successfully cleared this semester";
	else
	cout<<"\nWe regret to inform you that you have to re appear";
}
};

int main()
{
	Result r;
	r.cal_total();
	r.comment();
	return 0;
}
