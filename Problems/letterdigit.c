
#include<stdio.h>
#include<string.h>
int main()
{
char s[50],new,a=96;
int l,i;
clrscr();
printf("\n Enter the string");
scanf("\n %s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(97<=s[i]<=122)
{
new=s[i]-a;
}
printf("%d",new);
}
getch();
return 0;
}
