#include<stdio.h>
#include<string.h>
int main(void)
{
char string[100],temp;
int length,i;
printf("Enter the string to swap: \n");
scanf("%s",string);
length=strlen(string);
printf("String length is %d \n",length);
if(length%2==0)
{
for(i=0;i<length;i+=2)
{
temp=string[i];
string[i]=string[i+1];
string[i+1]=temp;
}
}
else
{
for(i=0;i<length-1;i+=2)
{
temp=string[i];
string[i]=string[i+1];
string[i+1]=temp;
}
}
printf("String after swapping:\n");
printf("%s",string);
return 0;
}
