#include<stdio.h>
int main()
{
	int i,id,unit,winner;
	int max=0;
	printf("enter employees information\n");
	for(i=1;i<=4;i++)
	{
		printf("enter employee number and sales unit\n");
		scanf("%d %d",&id,&unit);
		if(unit>max)
		{
			max=unit;
			winner=id;
		}		
	}
	printf("winner is %d who sales max unit %d",winner,max);
	return 0;
}
