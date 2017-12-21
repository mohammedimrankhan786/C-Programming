#include <stdio.h>
int main() 
{
int a,b,x,y,t,gcd,lcm;
clrscr(); 
printf("\n Enter two numbers:");
scanf("\n %d%d",&x,&y);
a=x;
b=y;
while(b!=0) 
{
t=b;
b=a%b;
a=t;
}
gcd=a;
lcm=(x*y)/gcd;
printf("LCM is %d\n",lcm);
getch();
return 0;
}
