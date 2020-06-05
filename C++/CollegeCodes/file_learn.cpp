#include<fstream>
#include<iostream>
using namespace std;

int main()
{
char a[20];
istream i;
i.open("abc.txt");
cout<<"Data written in file is ";
char ch;
ch=i.get();
while(!i.eof())
{
cout<<ch;
ch=i.get();
}
o.close();
}
