#include<stdio.h>
int main()
{
int min,hrs,mins;
printf("\n enter the time in minutes:");
scanf("%d",&min);
hrs=min/60;
mins=min%60;
printf("\n total hours is:%d",hrs);
printf("\n total mins is:%d",mins);
return 0;
}
