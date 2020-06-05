#include<stdio.h>
#include<conio.h>
int main()
{
	int i,col1,col2,mat1[10],mat2[10],mata[10],mats[10],choice;
	int ch;
//	char ch;
	do
	{
		printf("case1: matrix addition\n");
		printf("case2: matrix subtraction\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:	printf("Enter the no of cols of 1st matrix\n");
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
				break;
		case 2: 	printf("Enter the no of cols of 1st matrix\n");
				scanf("%d",&col1);
				printf("\nEnter the 1st matrix\n");
				for(i=0;i<col1;i++)
					scanf("%d",&mat1[i]);
				printf("Enter the no of cols of 2nd matrix\n");
					scanf("%d",&col2);
				printf("Enter the 2nd matrix\n");
				for(i=0;i<col2;i++)
					scanf("%d",&mat2[i]);	
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
				break;
		}
	printf("do you want to continue(1/0)\n");
//	scanf("%c",&ch);
	scanf("%d",&ch);
	}while(ch!=0);
//	getch();
	return 0;
}
