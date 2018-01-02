#include<stdio.h>
int main()
{
int a[50],n,i,r,t,f,j;
clrscr();
printf("\n Enter the number of elements in array");
scanf("\n %d",&n);
printf("\n Enter the elements:");
for(i=0;i<n;i++)
{
scanf("\n %d",&a[i]);
}
printf("\n Enter the number of time the array to rotate:");
scanf("\n %d",&r);
for(j=0;j<r;j++)
{
f=a[0];
for(i=0;i<n;i++)
{
a[i]=a[i+1];
}
a[n-1]=f;
}
printf("\n Rotated array");
for(i=0;i<n;i++)
{
printf("\n %d",a[i]);
}
getch();
return 0;
}
