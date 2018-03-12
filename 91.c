#include<stdio.h>
int main()
{
int l,b,h,a,v;
printf("\n enter the l,b,h values:");
scanf("%d %d %d",&l,&b,&h);
a=2*(l*b+b*h+h*l);
printf("\n area of cuboid is:%d",a);
v=l*b*h;
printf("\n volume of cuboid is:%d",v);
return 0;
}
