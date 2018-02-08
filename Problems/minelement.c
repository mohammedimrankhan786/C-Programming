#include<stdio.h>
int main()
{
    int a[50],n,i,m;
    clrscr();
    printf("\n Enter the number of elements:");
    scanf("\n %d",&n);
    printf("\n Enter the array elements:");
     for(i=0;i<n;i++)
     {
	     scanf("%d",a[i]);
     }
    for(i=0;i<n;i++)
    {
    m=0;
	  if(a[i]<a[i+1])
    {
	  m=a[i];
    }
    }
    printf("\n Maximum value is %d",m);
    getch();
    return 0;
}
