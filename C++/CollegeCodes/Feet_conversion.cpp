#include<iostream>
using namespace std;

class Distance
{
	int feet,inches;
	
	public:
		
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
		
		
		operator float()
		{
			float m;
			m=0.3048*feet+0.0254*inches;
			return m; 
		}
};

int main()
{
	Distance d;
	d.getdata();
	float metre;
	metre=d;
	cout<<"Conversion in metre is "<<metre<<endl;
}
