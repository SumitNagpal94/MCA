#include<stdio.h>
int findminelement(int[],int);
int findmaxelement(int[],int);
int main()
{
	int a[10],i,j,n;
	printf("enter the size of an array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min_ele=findminelement(a,n);
	int max_ele=findmaxelement(a,n);
	printf("minimum element of array is %d",min_ele);
	printf("maximum element of array is %d",max_ele);
	return 0;
}
int findminelement(int a[],int n)
{
	int min=a[0],i;
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}
int findmaxelement(int a[],int n)
{
	int max=a[0],i;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
