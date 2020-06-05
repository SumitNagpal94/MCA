#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class Concat
{
	char str[20];
	
	public:
	static int i;
		void getdata()
		{
		cout<<"Enter the "<<i<<" String"<<endl;
		cin.getline(str,25);
		i++;
		}
		void operator ==(Concat b)
		{
			if((strcmp(str,b.str)))
			cout<<"Entered Strings are not equal"<<endl;
			else
			cout<<"Entered Strings are equal"<<endl;
		}
		void operator +(Concat b)
		{
			int a=strlen(str);
			int x=0;
			str[a]=' ';
			a++;
			while(b.str[x]!='\0')
			{	
			str[a]=b.str[x];
			a++,x++;
			}
			str[a]='\0';
			cout<<"Appended String is "<<str<<endl;
		
		}
		
		
};

int Concat::i=1;

int main()
{
	Concat s1,s2;
	s1.getdata();
	s2.getdata();
	int a;
	cout<<"Select whether you want to 1:Compare or 2:Append\n";
	cin>>a;
	switch(a)
	{
		case 1:
			s1==s2;
			break;
		case 2:
			s1+s2;
			break;
		default:
			cout<<"Invalid Selection\n";
	}
	return 0;
}
