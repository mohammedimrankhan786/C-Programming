#include<stdio.h>
int main()
{
char ch;
clrscr();
printf("\n Enter the character:");
scanf("\n %c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("\n It is a vowel");
else
printf("\n It is a consonant");
getch();
return 0;
}
