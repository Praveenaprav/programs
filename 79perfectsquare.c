#include<stdio.h>
int main()
{
int a,b,c,i,temp;
scanf("%d %d",&a,&b);
c=a*b;
for(i=1;i<=c/2;i++)
{
if(i*i==c)
{
temp=1;
break;
}}
if(temp==1)
printf(" yes");
else
printf("no");
return 0;
}
