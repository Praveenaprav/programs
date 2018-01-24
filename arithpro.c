#include <stdio.h>
 int main()
{
 int a,d,n,i,t;
 int s=0;
 printf("enter the a value:");
 scanf("%d",&a); 
 printf("enter the difference:");
 scanf("%d",&d);
 printf("enter the n value :");
 scanf("%d",&n);
 s=(n*(2*a+(n-1)*d))/2;
 t= a+(n-1)*d;
 printf("Sum of arithmetic progression is:");
 for (i=a;i<=t;i=i+d )
 {
  if (i!=t)
  printf("%d+",i);
  else
  printf("%d",i+);
  }
 return 0;
}
