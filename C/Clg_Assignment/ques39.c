#include<stdio.h>
#include<math.h>
int maximum(int a[],int n);
int max(int a,int b);
int main()
{
	int i,n,a[10],max;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	scanf("%d",&a[i]);
	max=maximum(a,n);
	printf("maximum number is %d",max);
	return 0;
}
int maximum(int a[],int n)
{
	int largest;
	if(n==1)
	{
		return a[n-1];
	//	return max;
	}
	else
	 		return max(a[n-1],maximum(a,n-1));
		//	max= a[n-1];
	//	else
	//		maximum(a,n-1);
		
}
