#include<stdio.h>
int main()
{
	FILE *fp;
	int count=0;
	char c,source_file[20];
	fp=fopen("source_file.txt","r");
	if(fp==NULL)
	{
		printf("file can not be opened\n");
	}
	else
	{
		while((c=getc(fp))!=EOF)
		{
			count++;
		}
	}
	fclose(fp);
	printf("number of characters in file %d\n",count);
	return 0;
}
