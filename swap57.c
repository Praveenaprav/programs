#include<string.h>
int main()
{
int a,b,t;
printf("\n enter the a &b values:");
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("\n the swapped values are:%d %d",a,b);
return 0;
}
