#include<stdio.h>
int main()
{
	int i,mat1[10],mat2[10],mata[10],mats[10],matm[10],mat3[10],col1,col2,row,k;
	printf("Enter the no of cols of 1st matrix\n");
	scanf("%d",&col1);
	printf("\nEnter the 1st matrix\n");
	for(i=0;i<col1;i++)
		scanf("%d",&mat1[i]);
	printf("Enter the no of cols of 2nd matrix\n");
	scanf("%d",&col2);
	printf("Enter the 2nd matrix\n");
	for(i=0;i<col2;i++)
		scanf("%d",&mat2[i]);
	printf("\nmatrix addition\n");
	if(col1!=col2)
	{
		printf("matrix addition is not possible\n");
	}
	else
	{
		for(i=0;i<col1;i++)
			mata[i]=mat1[i]+mat2[i];
		for(i=0;i<col1;i++)
			printf("%d\n",mata[i]);
	}	
	printf("\nmatrix subtraction\n");
	if(col1!=col2)
	{
		printf("matrix subtraction is not possible\n");
	}	
	else
	{
		for(i=0;i<col1;i++)
			mats[i]=mat1[i]-mat2[i];
		for(i=0;i<col1;i++)
			printf("%d\n",mats[i]);
	}	
	printf("\nmatrix multiplication of mat1 and mat3\n");
	printf("enter the dimension of 3rd matrix\n");
		scanf("%d",&row);
	printf("enter 3rd matrix\n");
	for(i=0;i<row;i++)
		scanf("%d",&mat3[i]);
	if(row!=col1)
		printf("matrix multiplication is not possible\n");
	else
	{
		k=0;
		for(i=0;i<row;i++)
			k+=mat1[i]*mat3[i];
		matm[0]=k;
		printf("matrix multiplication\n");
		printf("%d",matm[0]);
}
return 1;
}

