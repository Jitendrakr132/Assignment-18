#include<stdio.h>
#include<string.h>
void alphanumberic(char s[]);
int main()
{
    char s[20];
    alphanumberic("jitu");
}
void alphanumberic(char s[])
{
    char i,f=0,j=0;

   for(i=0;s[i];i++)
   {
       if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
              f=1;
        if(s[i]>='0'&&s[i]<='9')
           j=1;
   }
   if(f==1&&j==1)
    printf("alphanumberic");
    else
        printf("Not alphnumberic");
}


