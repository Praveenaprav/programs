#include<stdio.h>
int main()
{
int i,k;
char s[50];
printf("\n enter the string:");
for(i=0;i<10;i++)
{
scanf("%c",&s[i]);
}
printf("\n enter the k value:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%c",s[i]);
}
return 0;
}
