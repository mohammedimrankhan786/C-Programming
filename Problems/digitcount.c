#include<stdio.h>
int main(void)
{
int num,count=0;
clrscr();
printf("\nEnter the number");
scanf("\n %d",&num);
count=printf("%d",num);
printf("\n %d digit",count);
getch();
return 0;
}
