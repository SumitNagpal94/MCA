#include<stdio.h>
int main()
{
	int num1,num2;	
	printf("enter any two numbers\n");
	scanf("%d  %d",&num1,&num2);
	if(num2%num1==0)
	{
		printf("num1 is multiple of num2");
	}
	else
	{
		printf("num1 is not multiple of num2");
	}
    return 0;
}
