#include<stdio.h>
void conarray(int a[],int b[]);
int main()
{
    int a[]={1,2,3,4,5},b[]={6,7,8,9,10};
    conarray(a,b);
    return 0;
}

void conarray(int a[],int b[])
{
    int i,n[20];
    for(i=0;i<5;i++)
    {
      n[i]=a[i];  
    }
    for(i=0;i<5;i++)
    {
      n[i+5]=b[i];  
    }
    for(i=0;i<10;i++)
    {
      printf("\n %d",n[i]);  
    }
}
