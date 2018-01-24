#include<stdio.h>
int main()
{
int n,rem,result=0;;
printf("Enter the number");
scanf("%d",&n); 
while(n!=0)
rem=n%10;
result=result+rem*rem*rem;
n=n/10;
if(result==n)
printf("yes");
else
printf("no");
return 0;
}
