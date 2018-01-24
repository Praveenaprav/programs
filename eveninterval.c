#include <stdio.h>
int main()
{
    int l, h,i,t;
    printf("Enter two intervals:");
    scanf("%d %d",&l,&h);
 printf("Prime numbers between %d and %d are: ",l,h);
while(l<h)
{t=0;
 for(i=2;i<=l/2;++i)
 {
     if(l%i==0)       
      {
t=1;
break;
}}
if(t==0)
printf("%d",l);
++l;      
 }
return 0;
}
