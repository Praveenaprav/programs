#include<stdio.h>
int main()
{
int n,sum=0,i,v;
scanf("%d",&n);
printf("\n enter the integers:");
for(i=0;i<n;i++)
{
scanf("%d",&v);
sum=sum+v;
}
printf("\n sum is:%d",sum);
return 0;
}
