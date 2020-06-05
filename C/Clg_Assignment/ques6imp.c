#include<stdio.h>
int main()
{
	int n,i,hours_no,gs,rate;
	gs=0;
	printf("no of employees in company\n");
	scanf("%d",&n);
	printf("enter employees information\n");
	for(i=1;i<=n;i++)
	{
		printf("enter hours_no and rate of employee %d \n",i);
		scanf("%d %d",&hours_no,&rate);
		if(hours_no<=40)
		{
			gs=hours_no*rate;
			printf("gross salary= %d\n",gs);
		}
		else
		{
			gs=40*rate + (hours_no-40)*(rate+rate/2);
			printf("gross salry= %d\n",gs);
		}
	}
	return 0;
}
