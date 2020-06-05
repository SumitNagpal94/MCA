#include<conio.h>
#include<iostream>
using namespace std;

int i=0;

	class hello
	{
		public:
		void get()
		{
		cout<<"\nhello get";
		cout<<"\n I value:"<<i;
		}
	
	};


int main()
{
hello hell[i];

hell[i].get();
i++;
hell[i].get();


return 0;
}
