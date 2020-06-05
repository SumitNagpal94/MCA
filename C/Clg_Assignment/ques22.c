#include<stdio.h>
int fibo(int n);
int main()
{
	int num,ans;
	printf("enter a number\n");
	scanf("%d",&num);
	ans=fibo(num);
	printf("number on %d position is %d",num,ans);
	return 1;
}
int fibo(int n)
{
	int value;
	if(n==1 || n==2)
	{
		return (n-1);
	}
	else
	{
		value=fibo(n-1)+fibo(n-2);
		return value;
	}
}
