#include <stdio.h>
int main()
{
int n,i,t;
int a[n];
scanf("%d",&n);
printf("\n enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}}
printf("\n highest number is:%d",a[i]);
printf("\n lowest number is:%d",a[0]);
return 0;
}
