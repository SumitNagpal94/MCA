#include<stdio.h>
struct Timestruct
{
	int hour;
	int min;
	int sec;
};
void display(struct Timestruct t1);
int main()
{
	struct Timestruct t1;
	printf("enter hour min and sec:\n");
	scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
	display(t1);
	return 0;
}
void display(struct Timestruct t1)
{
	printf("%d : %d : %d",t1.hour,t1.min,t1.sec);
}
