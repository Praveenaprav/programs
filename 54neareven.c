#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n%2==0)
{
printf("\n",n);
}
else{
n=n-1;
if(n%2==0)
{
printf("nearest even number is:%d",n);
}}
return 0;
}
