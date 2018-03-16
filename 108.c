#include<stdio.h>
int main()
{
int a,n,d,i,s=0;
scanf("%d %d %d",&a,&n,&d);
for(i=0;i<n;i++)
{
s=s+(a+(n*d));
}
printf("%d",s);
return 0;
}
