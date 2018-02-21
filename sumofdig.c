#include<stdio.h>
int main()
{
int n,c,s=0;
scanf("%d",&n);
while(n>0)
{
c=n%10;
s=s+c;
n=n/10;
}
printf("\n sum is:",s);
return 0;
}
