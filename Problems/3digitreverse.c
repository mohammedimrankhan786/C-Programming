#include<stdio.h>
int main(void)
{
int n,f,m,l;
clrscr();
printf("\n Enter the three digit number");
scanf("\n %d",&n);
f=n/100;
m=(n/10)%10;
l=n%10;
printf("\n %d%d%d",l,m,f);
getch();
return 0;
}
