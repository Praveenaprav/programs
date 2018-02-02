#include <stdio.h>
int main()
{
int n,a[10],i;
printf("enter the no.of elements:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<=n;i++)
{
	scanf("%d",&a[i]);
	printf("%d\t\n%d\t",i,a[i]);
}
	return 0;
}
