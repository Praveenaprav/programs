#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
int  k;
printf("enter the k value:");
scanf("%d",&k);
printf("enter the string:");
gets(str);
for(int i=0;i<k;i++)
{
printf("%s",str);
}return 0;
}
