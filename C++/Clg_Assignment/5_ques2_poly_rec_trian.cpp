//class polygon width height set_value() Rectangle Triangle calculate_area() base class pointer

#include<string.h>
#include<iostream>
using namespace std;

class polygon
{
	protected:
		float width,height;
	
	void setvalue()
	{
	cout<<"Enter the Width of the polygon ";
	cin>>width;
	cout<<"Enter the Height of the polygon ";
	cin>>height;
	}
	public:
	virtual void calculate_area()=0;
};

class Rectangle:public polygon
{
public:
void calculate_area()
{
setvalue();
cout<<"\nArea of Rectangle is "<<width*height;
}
};

class Triangle:public polygon
{
public:
void calculate_area()
{
setvalue();
cout<<"\nArea of Triangle is "<<0.5*width*height;
}	
};

int main()
{
	char shape[10];
	polygon *p;
	Rectangle r;
	Triangle t;
	do
	{
	cout<<"\nEnter the Shape of the Polygon (Rectangle/Triangle) ";
	cin>>shape;
	}while(strcmp(shape,"Rectangle") and strcmp(shape,"Triangle"));
	
	//p=new char[10];
	if(strcmp(shape,"Rectangle")==0)
	p=&r;
	else
	p=&t;
	p->calculate_area();
	return 0;
}
