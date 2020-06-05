#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			printf("%d ",i);
			n=n/i;
		}
	}
	return 0;
}
