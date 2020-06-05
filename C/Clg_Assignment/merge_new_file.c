#include<stdio.h>
int main()
{
char file_name1[20],file_name2[20],t_file[20],c;
FILE *fp1,*fp2,*fp3;
printf("enter the first file\n");
gets(file_name1);
printf("enter the second file name\n");
gets(file_name2);
printf("enter the third file name\n");
gets(t_file);
fp1=fopen(file_name1,"r");
fp2=fopen(file_name2,"r");
fp3=fopen(t_file,"w");

if(fp1==NULL || fp2==NULL)
{
	printf("file can not be opened\n");
}
else
{
	while((c=getc(fp1))!=EOF)
	{
		putc(c,fp3);
	}
	while((c=getc(fp2))!=EOF)
	{
		putc(c,fp3);
	}
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}
