#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,count=0;
    printf("Enter the string :");
    gets(s);
   for(i=0;s[i];i++)
   {
       if(s[i]=='\0')
       {
       count++;
       }
   }
   printf("length of string=%d",count);
}
