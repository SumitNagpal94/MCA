#include<stdio.h>
int reverse(int);
int main()
{
	int num,rev_num;
	printf("enter an integer\n");
	scanf("%d",&num);
	rev_num=reverse(num);
	printf("reverse number is %d",rev_num);
}
int reverse(int num)
{
	int r,rev_num;
	while(num!=0)
	{
		r=num%10;
		rev_num=rev_num*10+r;
		num=num/10;
	}
	return rev_num;
}
