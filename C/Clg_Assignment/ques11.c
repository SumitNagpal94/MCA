#include<stdio.h>
int main()
{
	int m,n,r,q;
	int count=0;
	printf("enter an integer\n");
	scanf("%d",&m);
	printf("enter a single digit\n");
	scanf("%d",&n);
	while(m!=0)
	{
	
		r=m%10;
		if(r==n)
			count++;
		m/=10;
	}
	printf("total digits %d\n",count);
	return 0;
}
