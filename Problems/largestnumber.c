#include<stdio.h>
int main()
{
int a,b,c;
clrscr();
printf("\nEnter the 3 integer values");
scanf("\n %d\n %d\n %d",&a,&b,&c);
if((a>b)&&(a>c))
printf("\n %d is the largest number",a);
else if((b>a)&&(b>c))
printf("\n %d is the largest number",b);
else if((c>a)&&(c>b))
printf("\n %d is the largest number",c);
else
printf("\n All 3 values (%d) are equal",a);
getch();
return 0;
}
