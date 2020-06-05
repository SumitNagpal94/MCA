#include<stdio.h>
int small(int,int,int);
int main()
{
	int n1,n2,n3,s;
	printf("Enter three integers\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	s=small(n1,n2,n3);
	printf("smallest of three integers is = %d\n",s);
}
int small(int num1,int num2,int num3)
{
	if(num1<num2 && num1<num3)
		return num1;
	else if(num2<num1 && num2<num3)
		return num2;
	else
		return num3;
}
