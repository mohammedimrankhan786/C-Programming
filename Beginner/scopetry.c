#include<stdio.h>
int count=100;        
void main()
{
printf("Global count value is %d \n",count);
int count=10;        
printf("Local count value is %d \n",count);
{
int count=1;
printf("Block count value is %d \n",count);
}
}
