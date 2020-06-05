#include<stdio.h>
#include<string.h>
int findfreq(char *str,char s);
int main()
{
	char str[10],s;
	printf("enter a string:\n");
	gets(str);
	printf("enter the character to be searched\n");
	s=getchar();
	findfreq(str,s);
	return 0;
}
int findfreq(char *str,char s)
{
	int c=0;
	for(*str;*str!='\0';*str++)
	{
		if(*str==s)
			c++;
	}
	printf("frequency of character in a string %d",c);
}

