#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,result=0;orgn;
clrscr();
printf('Enter the number");
scanf("%d",&n);
rem=n%10;
result=result+rem*rem*rem;
n=n/10;
if(result==n)
printf("the number is armstrong");
else
{
printf("not armstrong");
}
getch();
}
