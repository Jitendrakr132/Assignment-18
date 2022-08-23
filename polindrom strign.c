#include<stdio.h>
#include<string.h>
int polindrom(char s[]);
int main()
{
    char s[20],i;
    printf("Enter the string :");
    gets(s);
    if(polindrom(s))
        printf("polindrom string ");
    else
        printf("not polindrom");

}
int polindrom(char s[])
{
    int i,l;
    l=strlen(s);

    for(i=0;i<l/2;i++)
    {
    if(s[i]!=s[l-1-i])
        return 0;
    else
        return 1;
    }
}
