#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    char *ps;
    int l,i;
    printf("\n Enter the string");
    scanf("\n %s",s);
    l=strlen(s);
    for(i=l-1;i>=0;--i)
    {
        printf("\n %c",*(ps-i));
    }
    return 0;
}
