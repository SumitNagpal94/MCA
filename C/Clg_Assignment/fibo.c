#include<stdio.h>
int main()
{
	int n,i=1,a,b,c;
	printf("how much numbers u want to print\n");
	scanf("%d\n",&n);
	a=0;b=1;
	printf("%d %d", a,b);
	while(i<=(n-2))
	{
		printf("hello");
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
		i++;
	}
	return 0;
}
