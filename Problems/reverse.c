#include <stdio.h>
#include <string.h>
int main()
{
char arr[100];
clrscr();
printf("Enter a string to reverse\n");
gets(arr);
strrev(arr);
printf("Reverse of entered string is \n%s\n",arr);
getch();
return 0;
}
