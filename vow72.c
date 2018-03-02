#include<stdio.h>
int main()
{
char c,l,u;
printf("\n enter the string:");
scanf("%s",c);
l=(c=='a',c=='e',c=='i',c=='o',c=='u');
u=(c=='A',c=='E',c=='I',c=='O',c=='U');
if(c==l||u)
printf("\n it contains a vowel");
else
printf("\n it doesn't contains  a vowel");
return 0;
}
