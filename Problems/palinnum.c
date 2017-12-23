#include<stdio.h>
#include<string.h>
int main(void)
{
char a[10],b[10];
clrscr();
printf("\n Enter the number:");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
printf("\nYes");
}
else
printf("\nNo");
getch();
return 0;
}
