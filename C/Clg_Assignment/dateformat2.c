#include<stdio.h>
#include<stdlib.h>
void change_format(int,int,int);
//char month[12][12]={"jan","feb","march","april","may","june","july","aug","sept","oct","nov","dec"};
int main()
{
	int dd,mm,year;
	
	printf("enter date in the format(dd/mm/yyyy) format:\n");
	scanf("%d %d %d",&dd,&mm,&year);
	printf("%d/ %d /%d",dd,mm,year);
	
	change_format(dd,mm,year);
	return 0;
}
void change_format(int date,int mon,int year)
{
	char month[12][12]={"jan","feb","march","april","may","june","july","aug","sept","oct","nov","dec"};
	printf("\n %d %s %d",date,month[mon-1],year);
	return;
}
