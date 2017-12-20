#include<stdio.h>
#include<string.h>
int main(void)
{
char a[10],b[10];
clrscr();
printf("\n Enter the number or word");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
printf("\n It is a palindrome");
}
else
printf("\n It is not a palindrome");
getch();
return 0;
}
