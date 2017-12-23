#include<stdio.h>
int main()
{
char s[100];
clrscr();
printf("\n Enter the word:");
scanf("\n %[^xacdf]d",s);
printf("\n %s",s);
getch();
return 0;
}
