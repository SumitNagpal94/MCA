#include<stdio.h>
int main()
{
	int num1,num2,num3,sum,prod,smallestno,largestno;
	float avg;
	printf("Enter any three numbers\n");
	scanf(" %d %d %d" ,&num1,&num2,&num3);
	sum=num1+num2+num3;
	printf("Sum of three numbers %d\n",sum);
	avg=sum/3;
	printf("Average of three numbers %2.2f\n ",avg);
	prod=num1*num2*num3;
	printf("product of three numbers %d\n",prod);
	if(num1<num2 && num1<num3)
		smallestno=num1;
		else if(num2<num1 && num2<num3)
		smallestno=num2;
	else
		smallestno=num3;
	printf("Smallest of three numbers %d\n",smallestno);
		if(num1>num2 && num1>num3)
		largestno=num1;
		else if(num2>num1 && num2>num3)
		largestno=num2;
	else
		largestno=num3;
	printf("largest of three numbers %d\n",largestno);
	return 0;
}
