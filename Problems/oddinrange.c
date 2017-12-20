#include<stdio.h>
int main(void)
{
int start,stop,i;
clrscr();
printf("\n Enter the ranges");
scanf("\n %d",&start);
scanf("\n %d",&stop);
printf("\n The odd numbers between the ranges are:");
for(i=start;i<=stop;i++)
{
if(i%2!=0)
printf("\n %d",i);
}
getch();
return 0;
}
