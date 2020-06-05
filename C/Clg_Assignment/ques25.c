#include<stdio.h>
int gcd(int,int);
int main()
{
	int m,n,val;
	printf("enter two integers\n");
	scanf("%d %d",&m,&n);
	val=gcd(m,n);
	printf("gcd is %d",val);
}
int gcd(int m,int n)
{
	if(m<n)
	{
		gcd(n,m);
	}
	else
	{
		int r;
		r=m%n;
		if(r==0)
		{
			return n;
		}
		else
		{
			return(gcd(n,r));
		}
	}
}
