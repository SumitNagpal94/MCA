#include<stdio.h>
int perfect(int);
void main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	perfect(num);
}
int perfect(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
		printf("number is perfect");
	else
		printf("not perfect");
		
}
