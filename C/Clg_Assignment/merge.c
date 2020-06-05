#include<stdio.h>
int* merge(int a[10],int,int b[10],int,int c[10]);
int main()
{
	int a[10],b[10],c[10],n,m,i;
	printf("enter the size of Ist array:\n");
	scanf("%d",&n);
	printf("enter the elements of 1st array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the size of 2nd array:\n");
		scanf("%d",&m);
	printf("Enter  the elements of 2nd array:\n");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	merge(a,n,b,m,c);
	printf("elements of merged array:\n");
	for(i=0;i<(m+n);i++)
	{
		printf("%d\n",c[i]);
	}
	return 0;
}
int* merge(int a[10],int n,int b[10],int m,int c[10])
{
	int i=0;
	while(i<n)
	{
		c[i]=a[i];
		i++;
	}
	int j=0;
	while(j<m)
	{
		c[i]=b[j];
		i++;
		j++;
	}
	return c;
}
