#include<iostream>
using namespace std;

class A
{
	private:
		int a;
		void getdata()
		{
			cout<<"\nGetdata"<<endl;
		}
		
	public:
		void showdata()
		{
			cout<<"In show data";
			getdata();
			displaydata();
		}
		
		protected:
			int b=3;
			void displaydata()
			{
				cout<<"Protected Display Data\n";
			}
};
class B: private A
{
	public:	
	void data()
	{
		showdata();
	}
};

/*
class C:protected B
{
	
	public:	
	void show()
	{
	showdata();
	}	
};
*/
int main()
{
	B b;
	b.data();
	return 0;
}
