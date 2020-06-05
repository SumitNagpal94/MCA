#include<stdio.h>
int swap(int *x,int *y);
int main()
{
	int base=1,sum=0,temp,num,term,r,d;
	int temp1,d1,d2,d3,d4,r1,r2,resultant_num;
	printf("enter a  4 digit number\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		r=temp%10;
		d=(r+7)%10;
		term=d*base;
		sum=sum+term;
		base=base*10;
		temp=temp/10;
	}
	//printf("%d\n",sum);
	temp1=sum;
	d1=temp1/1000;
	r1=temp1%1000;
	d2=r1/100;
	r2=r1%100;
	d3=r2/10;
	d4=r2%10;
//	printf("%d %d %d %d\n",d1,d2,d3,d4);
	swap(&d1,&d3);
	//printf("%d %d %d %d\n",d1,d2,d3,d4);
	swap(&d2,&d4);
	//printf("%d %d %d %d\n",d1,d2,d3,d4);
	resultant_num=d1*1000+d2*100+d3*10+d4;
	printf("encrypted number= %d\n",resultant_num);
	return 1;
}
	
	int swap(int *x,int *y)
	{
		int temp;
		temp=*x;
		*x=*y;
		*y=temp;
		return;
	}


