#include<stdio.h>
int main()
{
int i,N,K,a[20];
scanf("%d %d",&N,&K);
for(i=1;i<=N;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=N;i++)
{
while(i==K)
{
printf("\n %d",a[i]);
break;
}}
return 0;
}
