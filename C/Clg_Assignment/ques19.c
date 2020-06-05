#include<stdio.h>
int prime(int);
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	prime(num);
//	for(j=1;j<=10000;j++)
//	{
//		prime(j);
//	}
}
int prime(int n)
{
	int flag=0,i;
	if(n==1)
	{
		printf("number is not prime\n");
	}
	else
	{
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Number %d is not prime\n",n);
	}
	else
	{
		printf("Number %d is prime\n",n);
	}
}
}

