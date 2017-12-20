#include<stdio.h>
int main(void)
{
int n,p,i=0,v=1,value;
clrscr();
printf("\n Enter the number to calculate its power (2,3 to give 8)");
scanf("\n %d \n %d",&n,&p);
while(i!=p)
{
value=v*n;
v=value;
i++;
}
printf("\n The value is\n %d",value);
getch();
return 0;
}
