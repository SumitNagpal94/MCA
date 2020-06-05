#include<stdio.h>
int main()
{
	int i,n,k,a[10];
	printf("how many values do you want to enter\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("which element do you want to search?\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("search found at %d position",i+1);
		}
	}
	return 1;
}
