#define percent 0.05
#include<stdio.h>
int main()
{
	float gs,salary;
	printf("enter gross sales\n");
	scanf("%f",&gs);
	salary=1000+ percent*gs;
	printf("salary of employee per week %f\n",salary);
	return 0;
}
