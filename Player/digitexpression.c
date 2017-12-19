#include<stdio.h>
void main()
{
int a=0,x=0,sum=0,i=1,z=0;
scanf("%d",&a);
while(z<4)
{
x=(a*i)+x;
i=i*10;
sum=sum+x;
z++;
}
printf("%d",sum);
}
