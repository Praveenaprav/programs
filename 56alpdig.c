#include<stdio.h>
int main()
{
int i,s[100],dig=0,count=0;
printf("\n enter the string:");
gets(s);
for(i=0;i<s[i]!=0;i++)
{
if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
{
dig++;
}
if(s[i]>='0'&&s[i]<='9')
{
count++;
}}
if(dig>=1&&count>=1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
return 0;
}
 
