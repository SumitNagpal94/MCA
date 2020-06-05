#include<iostream>
using namespace std;

int c[1][3];
class Vector;
class Matrix
{
public:
	int b[3][3];
friend void multiply(Matrix &,Vector &);
void getmatrix()
	{
	cout<<"enter matrix";
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
		cout<<"Enter a["<<i<<" ] ["<<j<<" ] ";	
		cin>>b[i][j];
		}
	}
};

class Vector
{
public:
	int a[3][3];
	friend void multiply(Matrix &,Vector &);
	void getvector()
	{
	cout<<"enter matrix";
	for(int i=0;i<3;i++)
		for(int j=0;j<1;j++)
		{
		cout<<"Enter a["<<i<<" ] ["<<j<<" ] ";	
		cin>>a[i][j];
		}
	}

void dismatrix()
{
	for(int i=0;i<3;i++)
		{
		cout<<"a["<<i<<" ] "<<a[i];
		}
}
};
void multiply(Matrix &m,Vector &v)
{
	for(int i=0;i<1;i++)
		for(int j=0;j<3;j++)
			for(int k=0;k<3;k++)
			c[i][j]+=m.b[i][j]*v.a[k][j];
}
int main()
{
	Matrix m;
	m.getmatrix();
	Vector v;
	v.getvector();
	multiply(m,v);
	v.dismatrix();
}
