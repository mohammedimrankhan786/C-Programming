#include<stdio.h>
#include<string.h>
int main(void)
{
char r[10];
int I,V,X,i,l,n[10],s=0;
clrscr();
printf("Enter the roman:\n");
scanf("%s",r);
l=strlen(r);
for(i=0;i<l;i++)
{
n[i]=r[i];
}

for(i=0;i<l;i++)
{
if(n[i]=='I')
n[i]=1;
else if(n[i]=='V')
n[i]=5;
else
n[i]=10;
}
printf("\nInteger value is:");

for(i=0;i<l;i++)
{
if(n[i]<n[i+1])
s=n[i]-s;
else
s=s+n[i];
}

printf("\n %d",s);
getch();
return 0;
}
