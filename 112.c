#include<stdio.h>
int main()
{
int i,n,k,a[50],t;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]==k)
{
t=1;
}}
if(t==1)
{
printf("k exists");
}
else
{
printf("no");
}
return 0;
}
