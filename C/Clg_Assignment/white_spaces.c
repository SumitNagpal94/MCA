#include<stdio.h>
void find_w_spaces(char *str,char *spaces);
int main()
{
	char str[10];
	char spaces[3]={' ','\t','\n'};
	printf("Enter a string:\n");
	gets(str);
	printf("entered string is:\n");
	puts(str);
	find_w_spaces(str,spaces);
	return 0;
}
void find_w_spaces(char *str,char *spaces)
{
	int c=0,i;
	while(*str!='\0')
	{
		for(i=0;i<3;i++)
		{
			if(*str==spaces[i])
				c++;
		}
		*str++;
	}
	printf("number of whitespaces\n %d",c);
}
