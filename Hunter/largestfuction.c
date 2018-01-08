#include<stdio.h>
int max(int a[],int n);
int main()
{
int n,a[50],i,m;
printf("\n Enter the number of elements:");
scanf("\n %d",&n);
printf("\n Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
m=max(a,n);
return 0;
}
int max(int a[],int n)
{
int i,temp,ma;
ma=a[0];
for(i=1;i<n;i++)
{
if(a[i]>ma)
ma=a[i];
}
printf("\n Max is %d",ma);
return ma;
}
