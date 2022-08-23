#include<stdio.h>
#include<string.h>
void repeatch(char s[20]);
int main()
{
    char s[20];
    printf("Enter the string :");
    gets(s);
    repeatch(s);
}
void repeatch(char s[])
{
    int i,j;
    int count=0;
    for(i=0;i<strlen(s);i++)
    {
        count=0;
        for(j=i+1;j<strlen(s);j++)
        {
        if(s[i]==s[j])
        {
            count++;
            s[j]='0';
        }
      }
    if(count>0&&s[i]!='0')
     printf("%c-%d\n ",s[i],count+1);
    }

}
