#include<stdio.h>
#define SIZE 6

int length(char str[],int i);
int main()
{
	int len;
	char str[SIZE]="tany";
	len=length(str,SIZE);
	printf("%d",len);
}
int length(char str[],int i)
{
	int len;
	if(str[0]=='\0')
		return 0;
	else
		len=1+length(str,i-1);
		return len;
}
