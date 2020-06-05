#include<iostream>
using namespace std;

class A
{
	int i=10;
	
	private:
		int getdata()
		{
			return i;
		}
	protected:
		int hello()
		{
			int j=getdata();
			return j;
		}
		
};
class B:private A
{
int j;
public:
	void display()
	{
	j=hello();
	//j=getdata();
	cout<<"Value of i is "<<j;	
	}	
};
int main()
{
	B b;
	b.display();
	return 0;
}
