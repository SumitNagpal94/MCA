#include<stdio.h>
void movedisk(int,char,char,char);
void main()
{
	int n;
	printf("how many disk u want to move\n");
	scanf("%d",&n);
	movedisk(n,'S','A','D');
	return;
}
void movedisk(int n,char source,char aux,char dest)
{
	if(n==1)
	{
		printf("move disk 1 from %c to %c\n",source,dest);
		return;
	}
	else
	{
		movedisk(n-1,source,dest,aux);
		printf("move disk %d from %c to %c\n",n,source,dest);
		movedisk(n-1,aux,source,dest);
	}
}
