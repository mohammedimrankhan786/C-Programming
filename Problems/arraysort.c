#include<stdio.h>
int main()
{
    int n,i,a[20],t,j;
    printf("\n Enter the number of elements:");
    scanf("\n %d",&n);
    printf("\n Enter the elements:");
    for(i=0;i<n;i++)
    {
       scanf("\n %d",&a[i]); 
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[j]<a[j+1])
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
    }
    printf("\n Sorted array:");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}
