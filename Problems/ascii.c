#include<stdio.h>
int main()
{
int s,e,i;
clrscr();
printf("\n Enter the range:");
scanf("\n %d\n%d",&s,&e);
printf("\n Ascii are:");
for(i=s;i<=e;i++)
{
printf("\n %c",i);
}
getch();
return 0;
}
