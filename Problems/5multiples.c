#include<stdio.h>
int main()
{
    int n,i,mul=1,d;
    printf("\n Enter the number to find its multiple:");
    scanf("\n %d",&n);
    for(i=1;i<=5;i++)
    {
        mul=n*i;
        printf("\n Multiples is: %d",mul);
    }
    return 0;
}
