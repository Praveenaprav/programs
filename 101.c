#include<stdio.h>
int main()
{
char a[50];
int n,i,l,count=0;
printf("\n enter teh string:");
gets(a);
scanf("%d",&l);
n=strlen(a);
for(i=n-1;i>=0;i--)
{
printf("%c",a[i]);
count++;
if(l==count)
{
break;
}}
return 0;
}
