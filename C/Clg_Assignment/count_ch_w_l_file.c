#include<stdio.h>
int main()
{
	FILE *fp;
	int ch_count=0,word_count=0,lines_count=0;
	char ch;
	fp=fopen("source_file2.txt","r");
	if(fp==NULL)
	{
		printf("file can not be opened\n");
	}
	else
	{
		while((ch=getc(fp))!=EOF)
		{
			ch_count++;
			if(ch==' '||ch=='\t'||ch=='\n')
			{
				word_count++;
			}
			if(ch=='\n' ||ch=='\0')
			{
				lines_count++;
			}
		}
	}
	if(ch_count>0)
	{
		word_count++;
		lines_count++;
	}
	fclose(fp);
	printf("number of characters in file %d\n",ch_count);
	printf("number of words in file %d\n",word_count);
	printf("number of lines in file %d\n",lines_count);
	return 0;
}
