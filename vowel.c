
#include<stdio.h>
int main()
{
char c;
int l,u;
printf("enter an alphabet:");
scanf("%c",&c);
l=(c=='a'||c=='e'||c=='i'||c='o'||c='u');
u=(c=='A'||c=='E'||c=='I'||c=='O'||c=='u');
if(l||u)
printf("%c is  a vowel",c);
else
pritnf("%c is a consonent",c);
return 0;}
