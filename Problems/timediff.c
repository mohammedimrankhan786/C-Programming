#include<stdio.h>
int main()
{
int h1,m1,h2,m2,h,m;
clrscr();
printf("\n Enter the hour and minute (first)");
scanf("\n %d:%d",&h1,&m1);
printf("\n Enter the hour and minute (second)");
scanf("\n %d:%d",&h2,&m2);
if(m1>m2)
{
m=m1-m2;
}
else
{
m=m2-m1;
}
if(h1>h2)
{
h=h1-h2;
}
else
{
h=h2-h1;
}
printf("\n Final Time");
printf("\n %d : %d",h,m);
m=m+(h*60);
printf("\n Total minutes");
printf("\n %d",m);
getch();
return 0;
}
