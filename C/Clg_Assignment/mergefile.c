#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	char c;
	fp1=fopen("target_file.txt","a");
	fp2=fopen("source_file.txt","r");
	fseek(fp1,0,2);
	if(fp1==NULL || fp2==NULL)
	{
		printf("file can not be opened\n");
	}
	else
	{
		while((c=getc(fp2))!=EOF)
		{
			putc(c,fp1);
		}
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
