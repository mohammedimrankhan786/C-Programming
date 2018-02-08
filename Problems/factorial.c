#include<stdio.h>
int main()
{
    int n,i,fact=1,d;
    printf("\n Enter the number to find factorial:");
    scanf("\n %d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
       
    }
    printf("\n Factorial is: %d",fact);
    return 0;
}
