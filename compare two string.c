#include<stdio.h>
#include<string.h>
int  compare(char s1[],char s2[]);
int main()
{
    char s1[20],s2[20];
    printf("Enter the string :");
    gets(s1);
    printf("Enter the second string:");
    gets(s2);
   printf("%d",compare(s1,s2));
}
int compare(char s1[],char s2[])
{
    int i=0;
    while(s1[i]!='\0'&&s2[i]!='\0')
    {
        if(s1[i]==s2[i])
            i++;
        else if(s1[i]>s2[i])
            return 1;
        else
            return -1;
    }
    if(s1[i]==0&&s2[i]==0)
        return 0;
    if(s1[i]==0)
        return -1;
    if(s2[i]==0)
        return 1;

}

