#include<stdio.h>
int decimal(int);
int octal(int);
int hexadecimal(int);
int main()
{
	int num,dec_num;
	printf("enter a binary number\n");
	scanf("%d",&num);
	dec_num=decimal(num);
	printf("decimal is %d\n",dec_num);
	octal(dec_num);
	hexadecimal(dec_num);
	return 1;
}
int decimal(int num)
{
	int temp,r,term;
	temp=num;
	int sum=0;
	int base=1;
	while(temp!=0)
	{
		r=temp%10;
		term=r*base;
		sum=sum+term;
		base=base*2;
		temp=temp/10;
	}
	return sum;
}
int octal(int dec_num)
{
	int temp,r,term;
	temp=dec_num;
	int sum=0;
	int base=1;
	while(temp!=0)
	{
		r=temp%8;
		term=r*base;
		sum=sum+term;
		base=base*10;
		temp=temp/8;
	}
	printf("octal is %d\n",sum);
}
int hexadecimal(int dec_num)
{
	int temp,r,term;
	temp=dec_num;
	int sum=0;
	int base=1;
	while(temp!=0)
	{
		r=temp%16;
		term=r*base;
		sum=sum+term;
		base=base*10;
		temp=temp/16;
	}
	printf("hexadecimal is %d\n",sum);
}

