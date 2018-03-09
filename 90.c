#include<stdio.h>
int main()
{
char s[30],i,n;
printf("\n enter the string:");
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]>='0'&&s[i]<='9')
{
printf("%c",s[i]);
}}
return 0;
}
