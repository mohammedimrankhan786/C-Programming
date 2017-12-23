#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int n,i;
clrscr();
printf("\n Enter the string:");
gets(s);
printf("\n Emter the number of times for it to print");
scanf("\n %d",&n);
for(i=0;i<n;i++)
{
printf("\n %s",s);
}
getch();
return 0;
}
