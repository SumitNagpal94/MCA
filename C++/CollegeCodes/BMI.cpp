#include<stdio.h>
#include<iostream>
#include<ostream>
#include<strings.h>
using namespace std;
class Person
{
    char *name;
    int age,height;
    float weight;
    public:
        float getBMI();
        friend istream &operator >> (istream &abc, Person &x);
        friend ostream &operator << (ostream &abc, Person x);
};

float Person :: getBMI()
{
    return weight / (height * height) * 10000;
}

istream &operator >> (istream &abc, Person &x)
{
    char nm[100];
    cout << "Enter name \n";
    gets(nm);
    x.name = new char [strlen(nm)+1];
    strcpy(x.name , nm);
    cout << "Enter height (in cm) \n";
    abc >> x.height;
    cout << "Enter weight (in kg) \n";
	abc >> x.weight;
    return abc;
}

ostream &operator << (ostream &abc , Person x)
{
    float bmi =x.getBMI();
    abc << "[" << x.name << " " << x.weight << "," << x.height << "," << bmi << "]"<<endl;
    if(bmi<18)
    cout<<"Under Weight"<<endl;
    else if(bmi>=18&&bmi<25)
    cout<<"Normal Weight"<<endl;
	else if(bmi>=25&&bmi<30)
    cout<<"Over Weight"<<endl;
	else if(bmi>=30)
    cout<<"Obselete"<<endl;
    else
    cout<<"Something went wrong,Please try again";
	return abc;
}

int main()
{
    Person x;
    cin >> x;
    cout << x;
    return 0;
}

