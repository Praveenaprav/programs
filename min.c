#include<stdio.h>
int main()
{
int a[10],n,i,min;
printf("\n enter the no.of element:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\n array elements are %d",a[i]);
}
  min=a[0];
  for(i=1;i>n;i++)
  {
  if(a[0]<max)
  {
    min=a[i];
    printf("minimum element are %d",min);
  }
  }
return 0;
}
