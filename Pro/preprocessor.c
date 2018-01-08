#include<stdio.h>
#define TOP 2
void main()
{
int a[25],n,i,t,j;
printf("\n Enter the number of elements:");
scanf("\n %d\n",&n);
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(a[i]<a[i+1])
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
printf("\n Top elements:");
for(i=0;i<TOP;i++)
{
    printf("\n %d",a[i]);
}
}
