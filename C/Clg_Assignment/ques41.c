#include<stdio.h>
int findlength(char *s1);
int main()
{
	char str1[10];
	printf("enter a string:\n");
	gets(str1);
	printf("entered string is:\n");
	puts(str1);
	findlength(str1);
	return 0;
}
int findlength(char *s1)
{
	int count;
	while(*s1!='\0')
	{
		*s1++;
		count++;
	}
	printf("length of string is= %d",count);
}

