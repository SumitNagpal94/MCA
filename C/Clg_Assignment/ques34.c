#include<stdio.h>
int main()
{	
	int i,j,n,a[10],temp,max,pos;
	printf("how many elements you want to enter?\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>0;i--)
	{
		max=a[0];
		pos=0;
		for(j=1;j<=i;j++)
		{
			if(a[j]>max)
			{
				max=a[j];
				pos=j;
			}
		}
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
	printf("after sorting\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
