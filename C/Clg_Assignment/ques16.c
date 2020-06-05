#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	printf("enter the number up to u want to print\n");
	scanf("%d",&n);
	printf("hello");
	a=0;
	b=1;
	c=0;
	printf("%d %d ",a,b);
	i=1;
	while(i<=(n-2))
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		i++;
	}
	return 1;
}
