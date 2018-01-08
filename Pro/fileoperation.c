#include<stdio.h>
void main()
{
char c;
FILE *fa,*fb,*fnew;
fa=fopen("a.txt",r+);
fprintf("Hello");
fb=fopen("b.txt",r+);
fprintf("Hai");
fnew=fopen("new.txt",w+);
c=fgetc(fa);
while(c!=EOF)
{
fnew(c, fa)
c=fgetc(fa);
}
c=fgetc(fb);
while(c!=EOF)
{
fnew(c, fb)
c=fgetc(fb);
}
fclose(fa);
fclose(fb);
c=fgetc(fnew)
while(c=EOF)
{
fputs(fnew);
}
return 0;
}

