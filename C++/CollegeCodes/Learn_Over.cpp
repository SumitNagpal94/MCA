#include<iostream>
using namespace std;

class point
{
	int x,y;
	
	public:
		
		point(int i,int j)
		{
		x=i;
		y=j;
		}
		point(int i)
		{
			x=i;
			y=30;
		}
		void printpoint()
		{
			cout<<endl<<"x= "<<x<<"\n"<<"y="<<y;
		}
		
	};
	
	int main()
	{
		point p(10,10);
		p.printpoint();
		p=10;
		p.printpoint();
	return 0;	
	}
