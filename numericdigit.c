#include<stdio.h>
int main()
{
int n;
int count=0;
printf("enter an integer :\n");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("no.of digits:%d",count);
return 0;
}
