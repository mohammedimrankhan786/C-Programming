#include<stdio.h>
int main()
{
char ch;
clrscr();
printf("\n Enter the character:");
scanf("\n %c",&ch);
if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
printf("\n It is alphabet");
else
printf("\n Not an alphabet");
getch();
return 0;
}
