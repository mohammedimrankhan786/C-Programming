#include<stdio.h>
int main(int argc,char *argv[])
{
int i;
for(i=1;i<argc;i++)
{
if(*argv[i]%2==0)
printf("Even");
else
printf("\nOdd");
}
}
