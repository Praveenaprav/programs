#include<stdio.h>
int main()
{
int n,l,r;
scanf("%d",&n);
printf("enter the range:");
scanf("%d %d",&l,&r);
if(l<=n&&r>=n)
printf("\n yes");
else
printf("\n no");
return 0;
}
