#include<stdio.h>
int main()
{
char s[20];
int n,i;
printf("\n enter the string:");
gets(s);
n=strlen(s);
for(i=0;i<=n;i++)
{
if(i%2==0)
{
printf("%c",s[i]);
}}
for(i=0;i<=n;i++)
{
if(i%2==1)
{
printf("%c",s[i]);
}}
return 0;
}
