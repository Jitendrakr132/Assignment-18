#include<stdio.h>
#include<string.h>
int reverse(char s[]);
int main()
{
    char s[50];
    printf("Enter the strings");
    gets(s);
    printf("%s",reverse(s));
}
int reverse(char s[])
{
    char i,j,temp=0;
    int l=strlen(s);
    for(i=0;i<l/2;i++)
    {
       if(s[i]=' ')
       {
        temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
        }
            }
    return l;


}
