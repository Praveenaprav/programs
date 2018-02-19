#include<stdio.h>
int main()
{
int n,d1,d2,d3;
printf("\n enter a number:");
scanf("%d",&n);
d3=n%10;
n=n/10;
d2=n%10;
n=n/10;
d1=n%10;
n=n/10;
printf("\n %d %d %d",d1,d2,d3);
return 0;
}
