#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter three integers\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf(" num1= %d\n num2= %d\n num3 %d\n",n1,n2,n3);
	if((n1+n2)>n3 && (n2+n3)>n1 && (n1+n3)>n2)
		printf("represent three sides of a triangle");
	else
		printf("not represent three sides of a triangle");
	return 1;
		
}
