#include<stdio.h>
int main()
{
int n,k,r=1;
printf("\n enter the n value:");
scanf("%d",&n);
printf("\n enter the k value:");
scanf("%d",&k);
while(k!=0)
{
r=r*n;
--k;
}
printf("\n result is:%d",r);
return 0;
}
