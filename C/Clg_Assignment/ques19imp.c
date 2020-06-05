#include<stdio.h>
int prime(int);
int main()
{
	int j,flag;
	for(j=1;j<=10000;j++)
	{
		flag=prime(j);
			if(flag==0)
	{
		printf("Number %d is prime\n",j);
	}

	}
}
int prime(int n)
{
	int flag=0,i;
	if(n==1)
	{
		//printf("number is not prime\n");
		flag=1;
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
} 
	return flag;
}

