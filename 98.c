#include<stdio.h>
int main()
{
int i,n,a[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
if(a[i]!=i)
{
printf("%d",i);
break;
}}return 0;
}
