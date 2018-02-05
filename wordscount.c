#include<stdio.h>
int main()
{
int length,n1,n2,n3;
char a[50],b[50],c[50];
scanf("%s %s %s",&a,&b,&c);
n1=strlen(a);
n2=strlen(b);
n3=strlen(c);
length=n1+n2+n3;
printf("length is:%d");
return 0;
}
