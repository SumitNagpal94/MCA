#define PI 3.14
#include<stdio.h>
int main()
{
	float r,c,d,a;
	printf("Enter radius of circle\n");
	scanf("%f",&r);
	d=2*r;
	printf("diameter of circle %f\n",d);
	c=2*PI*r;
	printf("circumference of circle %f\n",c);
	a=PI*r*r;
	printf("area of circle %f\n",a);
	return 0;
}















