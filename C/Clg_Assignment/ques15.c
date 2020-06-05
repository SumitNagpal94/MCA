#include<stdio.h>
int main()
{
	float sum,term;
	int x,n;
	printf("enter value of x\n");
	scanf("%d",&x);
	sum=1;
	term=1;n=1;
	while(n<=100)
	{
		term=term*x/n;
		sum=sum+term;
		n++;
	}
	printf("sum= %f",sum);
	return 0;
}
