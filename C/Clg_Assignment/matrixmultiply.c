#include<stdio.h>
int** productmatrix(int a[10][10],int b[10][10],int c[10][10]);
int r1,c1,r2,c2,i,j;
int main()
{
	int a[10][10],b[10][10],c[10][10];
	printf("enter the no of rows and cols of 1st matrix:\n");
	scanf("%d %d",&r1,&c1);
	printf("enter 1st matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the no of rows and cols of 2nd matrix:\n");
	scanf("%d %d",&r2,&c2);
	printf("enter 2nd matrix:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	productmatrix(a,b,c);
	printf("product of matrix is:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\n",c[i][j]);
			}
		}
	return 0;
} 
int** productmatrix(int a[10][10],int b[10][10],int c[10][10])
{
	int k;
	
	if(c1!=r2)
	{
		printf("matrix multiplication is not possible\n");
	}
	else
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
	}
	return c;
}
