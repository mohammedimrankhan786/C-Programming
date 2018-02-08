#include<stdio.h>
int main(void)
{
int n,sum=0;
printf("\n Enter the number to find its sum:");
scanf("\n %d",&n);
sum=(n*(n+1))/2;
printf("\n The sum of %d is %d",n,sum);
return 0;
}
