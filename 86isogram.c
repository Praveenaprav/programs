#include<stdio.h>
int main()
{
char s[20];
int i,f;
printf("\n enter the string:");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==s[i+1])
{
f=1;
}}
if(f==1)
printf("no");
else
printf("yes");
return 0;
}
