
#include<stdio.h>
#include<string.h>
int main()
{
char s,new,a=96;
clrscr();
printf("\n Enter the character");
scanf("\n %s",&s);
if(97<=s<=122)
{
new=s-a;
}
printf("\n %d",new);
getch();
return 0;
}
