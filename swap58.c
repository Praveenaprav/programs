#include<stdio.h>
int main()
{
int i,j;
printf("\n enter the i value:");
scanf("%d",&i);
printf("\n enter the j value:");
scanf("%d",&j);
i=i^j;
j=i^j;
i=i^j;
printf("\n after swapping :%d %d",i,j);
return 0;
}
