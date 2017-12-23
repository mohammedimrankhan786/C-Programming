#include<stdio.h>
int main()
{
int a,b;
clrscr();
printf("\n Enter two number");
scanf("\n %d \n %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n After swapping:\n %d %d",a,b);
getch();
return 0;
}
