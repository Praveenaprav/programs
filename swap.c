#include<stdio.h>
int main()
{
int i,j,t;
printf("\n enter the first number");
scanf("%d",&i);
printf("\n enter the second number");
scanf("%d",&j);
t=i;
i=j;
j=t;
printf("\n after swapping :%d %d",i,j);
return 0;
}
