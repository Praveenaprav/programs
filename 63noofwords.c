#include<stdio.h>
int main()
{
int len,n1,n2,n3;
char x[100],y[100],z[100];
scanf("%s %s %s",&x,&y,&z);
n1=strlen(x);
n2=strlen(y);
n3=strlen(z);
len=n1+n2+n3;
printf("length is:%d");
return 0;
}
