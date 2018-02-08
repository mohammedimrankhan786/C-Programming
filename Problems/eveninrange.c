#include<stdio.h>
int main()
{
    int start,end,i;
    printf("\n Enter the start and ending range:");
    scanf("\n %d \n %d",&start,&end);
    for(i=start;i<=end;i++)
    {
        if(i%2==0)
        {
            printf("\n %d",i);
        }
    }
    return 0;
}
