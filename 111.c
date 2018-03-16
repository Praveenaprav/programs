#include<stdio.h>
int main()
{
int a;
int count=0;
printf("enter an integer \n:");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
++count;
}
printf("no.of digits:%d",count);
return 0;
}
