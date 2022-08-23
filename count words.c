#include<stdio.h>
#include<string.h>
int count(char s[]);
int main()
{
    char s[20];
    printf("Enter the string :");
    gets(s);
    printf("count words is string=%d",count(s));
    return 0;
}
int count(char s[])
{
    char i,C=0;
    for(i=0;s[i];i++)
    {
    if(s[i]==' '&&s[i+1]!=' ')
        C++;
    }
     return C;
}
