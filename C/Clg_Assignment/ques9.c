#include<stdio.h>
int main()
{
	int num,rev_no,temp,r;
	rev_no=0;
	printf("enter a number\n");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		r=num%10;
		rev_no=rev_no*10+r;
		num/=10;
	}
	if(temp==rev_no)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}
	return 0;
}
    
