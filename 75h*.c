#include<stdio.h>
int main()
{
char s[20];
int n;
printf("\n enter the string;");
gets(s);
n=strlen(s);
if(n%2==0)
{
s[n/2]='*';
s[(n/2)-1]='*';
}
else
{
s[n/2]='*';
}
return 0;
}

