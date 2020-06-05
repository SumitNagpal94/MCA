#include<stdio.h>
#include<string.h>
void compare(char *s1,char *s2);
int main()
{
	
	char str1[10],str2[10];
	printf("enter two strings:\n");
	gets(str1);
	printf("enter 2nd string:\n");
	gets(str2);
	printf("two strings are:\n");
		puts(str1);
		puts(str2);
	compare(str1,str2);
	return 0;
}
void compare(char *s1,char *s2)
{
	while(*s1!='\0' && *s2!='\0' && *s1==*s2)
	{
		*s1++;
		*s2++;
	}
	if(*s1=='\0' && *s2=='\0')
		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
}

