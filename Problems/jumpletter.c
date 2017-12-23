#include<stdio.h>
int main()
{
char s[50];
int l,i;
clrscr();
printf("\n Enter the string:");
gets(s);
printf("\n");
l=strlen(s);
for(i=0;i<l;i++)
{
s[i]+=4;
}
printf("\n %s",s);
getch();
return 0;
}
