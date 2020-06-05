#include <string.h>
#include<iostream>
using namespace std;
int comp(char s[],char str[])
{
    int i=0;
    while(i>=0)
    {
        if(s[i]>str[i])
        {
          return 1;
          
        }
        else if(s[i]<str[i])
        {
            return -1;
        }
        else if(s[i]=='\0'&&str[i]=='\0')
        {
            return 0;
        }
        else
        {
        i++;    
        }
        
    }
}

int main()
{
    char s[]="nagpal";
    char str[]="sumit";
     
     //cout<<"strcmp(s,str)="<<comp(s,str);
     if(comp(s,str)==-1)
	cout<<"String 2 is greater";
	else if (comp(s,str)==0)
	cout<<"String are equal";
	else if(comp(s,str)==1)
	cout<<"String 1 is greater";    
    return 0;
}
