#include<stdio.h>
int main()
{
char str1[50],str2[50],str3[50];
int i,j;
printf("\n enter the str1:");
gets(str1);
printf("\n enter the str2:");
gets(str2);
for(i=0;str1[i]!='\0';i++)
{
str3[i]=str1[i];
}
for(j=0;str1[j]!='\0';j++)
{
str3[i+j]=str2[j];
}
str3[i+j]='\0';
printf("\n :%s",str3);
return 0;
}
