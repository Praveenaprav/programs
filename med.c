#include<stdio.h>
int main()
{
int i,j,a[50],n,med;
printf("enter no of element");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\n array elements are %d",a[i]);
}
  for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
  if(a[i]>a[j])
{
med=a[i];
a[i]=a[j];
a[j]=med;}}}
 printf("median element is: %d",med);
return 0;
}
