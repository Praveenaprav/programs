#include<stdio.h>
int main()
{int a,i,f=0;
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
f=1;
break;
}}
if(f!=0)
printf("\n it's a composite no");
else
printf("\n it's not a composite no");
return 0;
}
