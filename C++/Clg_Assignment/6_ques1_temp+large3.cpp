#include<iostream>
using namespace std;

template <class A,class B,class C>
class Large
{
public:
void Lrg()
{
A num1;
B num2;
C num3;
cout<<"Enter Number 1	";
cin>>num1;
cout<<"Enter Number 2	";
cin>>num2;
cout<<"Enter Number 3	";
cin>>num3;
num1>num2?(num1>num3?cout<<"num1 "<<num1<<" is largest":cout<<"num3 "<<num3<<" is largest"):(num2>num3?cout<<"Num 2 "<<num2<<" is largest":cout<<"Num 3 "<<num3<<" is largest");
}
};
int main()
{
Large <float,float,double>l1;
l1.Lrg();
cout<<"\n\n";
Large <double,float,double>l2;
l2.Lrg();
return 0;
}

