#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50];
int l1,l2;
printf("\n enter the str1:");
gets(str1);
printf("\n enter the str2:");
gets(str2);
l1=strlen(str1);
l2=strlen(str2);
if(l1==l2)
{
printf("\n :%s",str2);
}
else
{
if(l1>l2)
{
printf("\n :%s",str1);
}
else
{
printf("\n :%s",str2);
}
}
return 0;
}
