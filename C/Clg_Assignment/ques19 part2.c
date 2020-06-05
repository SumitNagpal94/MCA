#include<stdio.h>
int prime(int);
int main()
{
	int j,flag;
	for(j=1;j<=10;j++)
	{
		flag=prime(j);
			if(flag==1)
	{
		printf("Number %d is not  prime\n",j);
	}

	}
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
} 
	return flag;
}

