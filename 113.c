#include<stdio.h>
int main()
{
int n,k,i,a[30],count=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
count++;
}}
printf("\n repetitions:%d",count);
return 0;
}