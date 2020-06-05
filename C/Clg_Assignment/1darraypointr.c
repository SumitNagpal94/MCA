#include<stdio.h>
#include<malloc.h>
int main()
{
	int *a[3],i,j,col,row;
	printf("enter the no of rows and cols\n");
	scanf("%d %d",&row,&col);
	 for (i=0; i<row; i++) 
         a[i] = (int *)malloc(col* sizeof(int)); 
	printf("enter matrix elements:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			 scanf("%d", (*(a+i)+j));
		}
	}
	printf("matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\n",*(*(a+i)+j));
		}
	}
	return 0;
}
