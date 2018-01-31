#include<stdio.h>
int main()
{
int hr1,min1,hr2,min2,hr3,min3;
printf("\n enter the hr1:");
scanf("%d ",&hr1);
printf(" enter the min1:");
scanf("%d",&min1);
printf("\n enter the time hr2:");
scanf("%d ",&hr2);
printf(" enter the min2:");
scanf("%d",&min2);
hr3=hr1-hr2;
min3=min1-min2;
printf("\n time is:%d %d",hr3,min3);
return 0;
}
