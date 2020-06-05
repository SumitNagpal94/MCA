#include<stdio.h>
int main()
{
	int n,i,hours_no,rate;
	char name;
	float gs;
	gs=0;
	printf("no of employees in company\n");
	scanf("%d",&n);
	printf("enter employees information\n");
	for(i=1;i<=n;i++)
	{
		printf("name hours_no rate\n");
		scanf("%c %d %f\n",&name,&hours_no,&rate);
		if(hours_no<=40)
		{
			gs=hours_no*rate;
			printf("gross salary= %f\n",gs);
		}
		else
		{
			gs=40*rate + (hours_no-40)*(rate+rate/2);
			printf("gross salry %f\n",gs);
		}
	}
	return 0;
}
