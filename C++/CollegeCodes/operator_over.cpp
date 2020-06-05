#include<iostream>
using namespace std;

class A
{
	int number;
	public:
		void getdata()
		{
			cout<<"Enter number"<<endl;
			cin>>number;
		}
		void displaydata()
		{
			cout<<"number= "<<number<<endl;
		}
		void operator =(A a1)
		{
		number=a1.number;
		}
};
int main()
{
	A a1,a2;
	a1.getdata();
	a2=a1;        //a2.oper_equal(a1) //a2.opertor=(a1)	                                 		//c3=c1+c2  c1.operator+(c2)
	a2.displaydata();
}


