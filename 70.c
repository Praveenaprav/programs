#include<stdio.h>
int main()
{
int a=1,exp,c=2;i;
printf("\n enter the exp number:");
scanf("%d",&exp);
while(exp!=0)
{
a=a*c;
--exp;
}
printf("%d",a*c);
return 0;
}
