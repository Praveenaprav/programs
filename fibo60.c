#include <stdio.h>
int main()
{
int x,a=0,b=1,c,i;
printf("enter the range:");
scanf("%d",&x);
for(i=0;i<=x;i++)
{
printf("%d\n",a);
c=a+b;
a=b;
b=c;
}
return 0;
}
