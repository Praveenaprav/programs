#include<stdio.h>
int main()
{
int num,pow;
scanf("%d",&num);
pow=(num&(num-1));
if(pow==0)
printf("\n yes");
else
printf("no");
return 0;
}
