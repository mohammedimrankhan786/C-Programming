#include<stdio.h>
int main()
{
char s[100];
int length=0,i=0,j=0,count=0;
clrscr();
printf("\n Enter the string");
scanf("\n %s",s);
length=strlen(s);
printf("\n %d\n",length);
for(i=0;i<length;i++)
{
for(j=0;j<length;j++)
{
if(s[i]==s[j])
{
count++;
}
}
printf("%c %d",s[i],count);
count=0;
}
getch();
return 0;
}
