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
        for(j=0;j<n;j++)
        {
        if(a[j]<a[j+1])
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
        }
    }
    printf("\n Sorted array:");
    for(j=0;j<n;j++)
    {
        printf("%d",a[j]);
    }
    return 0;
}
