#include<stdio.h>
int main(void)
{
char s[50];
int count=0;
clrscr();
printf("\nEnter the string:\n");
scanf("\n %s",s);
count=printf("%s",s);
printf("\n%d characters",count);
getch();
return 0;
}
