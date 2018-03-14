
#include<stdio.h>
int main()
{
int n,i,p=1,v;
printf("enter the integers:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&v);
p=p*v;
}
printf("\n product is:%d",p);
return 0;
}
