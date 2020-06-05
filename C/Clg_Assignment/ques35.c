#include<stdio.h>
int main()
{
	int i,n,k,a[10],mid,j,temp;
	printf("how many values do you want to enter\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("output array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
