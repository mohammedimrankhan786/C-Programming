#include<stdio.h>
int main()
{
int a[20],n,i,k,sum;
clrscr();
printf("\n Enter the number of array elements:");
scanf("\n %d",&n);
printf("\n Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("\t %d",&a[i]);
}
printf("\n Enter number of elements to find its sum:");
scanf("\n %d",&k);
for(i=0;i<k;i++)
{
sum=sum+a[i];
}
printf("\n Sum is %d",sum);
getch();
return 0;
}
