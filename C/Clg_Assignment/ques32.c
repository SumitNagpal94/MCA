#include<stdio.h>
int bsearch(int a[],int i,int n,int k,int mid);
int main()
{
	int i,n,k,a[10],mid,pos;
	printf("how many elements do you want to enter?\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("which element you want to search?\n");
	scanf("%d",&k);
	mid=n/2;
	pos=bsearch(a,0,n,k,mid);
	printf("element found at position %d\n",pos);
	return 0;
}
int bsearch(int a[],int i,int n,int k,int mid)
{
	while(i<=(n/2))
	{
		if(k==a[mid])
			return (mid+1);
		else if(k < a[mid])
			mid=mid/2;
		else
			mid=(mid+n)/2;	
		i++;
	}
}
