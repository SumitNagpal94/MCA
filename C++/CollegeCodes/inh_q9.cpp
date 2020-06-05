#include<string.h>
#include<iostream>
using namespace std;

class Staff
{
	protected:
		char name[20],code[7];
		
		void getstaffdata()
		{
			cout<<"Enter the staff Code ";
			cin>>code;
			cout<<"Enter the Name of the Staff ";
			cin>>name;
		}
		void displaystaffdata()
		{
		cout<<"\n\nName of the Staff is "<<name;
		cout<<"\nEmpCode of the Staff is "<<code;
		 } 
};

class Faculty:public Staff
{
	protected:
	char dept[20],res[10],sub[5][5];
	int n;
	
	public:
	
	void getfacdata()
	{
	getstaffdata();
	cout<<"Enter Department name ";
	cin>>dept;
	cout<<"\nEnter the number of subjects ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the subject "<<i+1<<" ";
		cin>>sub[i];
	}
	cout<<"Enter the research area ";
	cin>>res;
	}
	void displaydata()
	{
	displaystaffdata();
	cout<<"\nDepartment of the Faulty is "<<dept;	
	cout<<"Subjects taken by Faculty are \n";
	for(int i=0;i<n;i++)
	cout<<"Subject "<<i+1<<" is "<<sub[i]<<endl;
	cout<<"\nResearch area of Faculty is "<<res;
	}	
};

class typist:public Staff
{

protected:
	
char off[20];
int speed;

protected:
	
void gettydata()
{
getstaffdata();
cout<<"Enter office name/location ";
cin>>off;//cin.getline(off,20);
cout<<"Enter your Typing Speed ";
cin>>speed;
}

void displaytydata()
{
displaystaffdata();
cout<<"\nOffice name/loaction is "<<off;
cout<<"\nTyping Speed is "<<speed;
}

};

class officer:protected Staff
{
	int rank;
	char grade[10];
	
public:
	void getoffdata()
	{
	getstaffdata();
	cout<<"Enter rank of the officer ";
	cin>>rank;
	cout<<"Enter grade of the officer ";
	cin>>grade;
	}
	
	void displayoffdata()
	{
	displaystaffdata();
	cout<<"\nRank of the officer is "<<rank;
	cout<<"\nGrade of the officer is "<<grade;
	}
		
};
class Permanent:protected typist
{
	int salary;
	
	public:
		void getsal()
		{
			gettydata();
			cout<<"Enter the salary ";
			cin>>salary;
		}
		void displaysal()
		{
		displaytydata();
		cout<<"\nSalary of the Typist is "<<salary;
		}
}
;
class Casual:protected typist
{
	int wage;
	
	public:
		void getwage()
		{
			gettydata();
			cout<<"Enter the wage ";
			cin>>wage;
		}
		void displaywage()
		{
		displaytydata();
		cout<<"\nWage of the Typist is "<<wage;
		}
};
int main()
{
int n;
cout<<"Select Staff category\n1:Faculty\n2:Typist\n3:Officer\n";
cin>>n;
switch(n)
{
	case 1:
		Faculty f;
		f.getfacdata();
		f.displaydata();
		break;
	case 2:
		char cat[10];
		do
		{
		cout<<"\nEnter whether employee is Permanent or Casual ";
		cin>>cat;
		}while(strcmp(cat,"Permanent") and strcmp(cat,"Casual"));
		if(strcmp(cat,"Permanent")==0)
		{
		Permanent p;
		
		p.getsal();
		p.displaysal();
		}
		else
		{
			Casual c;
			c.getwage();
			c.displaywage();
		}
		break;
	case 3:
		officer o;
		o.getoffdata();
		o.displayoffdata();
		break;
	default:
		cout<<"\nYou may learn numbers now\n";
		main();
}
return 0;
}
