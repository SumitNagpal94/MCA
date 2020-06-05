#include<conio.h>
#include<iostream>
using namespace std;

class Distance
{
	int feet,inches;
	
	public:
		
		Distance()
		{
			feet=0;
			inches=0;
		}
		void getdata()
		{
			int error;
			cout<<"Enter the distance in format (Feet\'inches) \n";
			cin>>feet;
			if(cin.get()!='\'' or feet<0)
			{
				cout<<"Please try again\n";
				cin.clear();
				cin.ignore(10000, '\n'); 
				error=1;
			}
			else
			{
				cin>>inches;
				if(inches<0) 
				cout<<"\nPlease try again\n";
			}
		if(error==1)
		getdata();
		
		while(inches>=12)
		{
		feet++;
		inches-=12;	
		}
		
		}	
		void show()
		{
		cout<<""<<feet<<"'"<<inches<<endl;
		}
		void operator <(Distance b)
		{
		if(feet>b.feet)
		cout<<"First Distance "<<feet<<"'"<<inches<< "is greater"<<endl;
		else if(b.feet>feet)
		cout<<"Second Distance "<<b.feet<<"'"<<b.inches<< "is greater"<<endl;
		else if(feet==b.feet)
		if(inches>b.inches)
		cout<<"First Distance "<<feet<<"'"<<inches<< "is greater"<<endl;
		else if(inches==b.inches)
		cout<<"Distance is equal"<<endl;
		else
		cout<<"Second Distance "<<b.feet<<"'"<<b.inches<< " is greater"<<endl;
		}
		
		void operator+=(Distance b)
		{
		inches+=b.inches;
		feet+=b.feet;
		while(inches>=12)
		{
		feet++;
		inches-=12;	
		}
		cout<<"First Distance is ";//<<feet<<"'"<<inches<<endl;
		show();
		cout<<"Second Distance is ";//<<b.feet<<"'"<<b.inches<<endl;
		b.show();
		}
		Distance(int a)
		{
			cout<<"Welcome to parameterized Constructor\n\n\n\n";
		}

};
int main()
{
	int s;
	Distance c(1),a,b;
	cout<<"First Distance"<<endl;
	a.getdata();
	cout<<"Second Distance"<<endl;
	b.getdata();
	cout<<"\n\nEnter Value for the Following\n1: For Comparasion\n2: For Adding Value of Second in First\n";
	cin>>s;
	switch(s)
	{
	case 1:
	a<b;
	break;
	case 2:
	a+=b;
	break;
	default:
	cout<<"Invalid Input, Try again Later";
	}
return 0;
}
