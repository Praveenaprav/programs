#include<stdio.h>
int main()
{
int r,a[30],i,j,t;
printf("enter the no.of elements in range:");
scanf("%d",&r);
for(i=0;i<r;i++)
{
scanf("%d",&a[i]);
}printf("\n the elements are:");
for(i=1;i<r;i++)
{
for(j=i+1;j<r;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
printf("%d",a[i]);}
}  
r=(((r+1)/2)-1);
printf("%d",r);
}
return 0;
}
