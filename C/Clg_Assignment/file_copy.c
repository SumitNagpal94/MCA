#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	char c;
	fp1=fopen("source_file.txt","r");
	fp2=fopen("target_file.txt","w");
	if(fp1==NULL || fp2==NULL)
	{
		printf("file can not be opened\n");
	}
	else
	{
		while((c=getc(fp1))!=EOF)
		{
			putc(c,fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
