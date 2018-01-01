#include<stdio.h>
int main()
{
int s[5][6]={{1,50,60,70,180,60},{2,80,50,50,180,60},{3,50,50,80,180,60},{4,50,70,60,180,60},{5,70,60,50,180,60}};
int n,i,j;
clrscr();
printf("\n Enter the register number:");
scanf("\n %d",&n);
for(i=0;i<5;i++)
for(j=0;j<6;j++)
{
if(s[i][j]==n)
printf("\n regno: %d m1: %d m2: %d m3: %d total: %d percent: %d",s[i][j],s[i][j+1],s[i][j+2],s[i][j+3],s[i][j+4],s[i][j+5]);
}
getch();
return 0;
}
