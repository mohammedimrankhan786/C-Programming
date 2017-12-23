#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100],s3[200];
int i,j,l1,l2;
clrscr();
printf("\nEnter first string:");
gets(s1);
printf("\nEnter second string:");
gets(s2);
l1=strlen(s1);
l2=strlen(s2);
for(i=0;i<l1;i++)
{
s3[i]=s1[i];
}
for(j=0;j<l2;j++)
{
s3[i+j]=s2[j];
}
printf("\nThe concatenated string is: %s",s3);
getch();
}
