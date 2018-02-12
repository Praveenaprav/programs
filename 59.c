#include<stdio.h>
int main()
{
int a=10,b[25],i,n;
printf("\n array elements are:");
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
n=b[0];
for(i=0;i<a;i++)
if(n<b[i])
{
n=b[i];
}
printf("\n result is %d",n);
return 0;
}
