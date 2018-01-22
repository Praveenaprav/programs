#include<stdio.h>
int main()
{
int a[100],i,n,k,s=0;
printf("\n enter the size of array:");
scanf("%d",&n);
printf(" \nenter the elements of array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the no.of values to be added:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
s=s+a[i];
}
printf("\n sum of elements of array=%d",s);
return 0;
}
