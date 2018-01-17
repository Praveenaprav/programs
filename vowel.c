
#include<stdio.h>
int main()
{
char n,c;
int isLowercaseVowel,isUppercaseVowel;
printf("enter an alphabet:");
scanf("%c",&n);
isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c='o'||c='u');
isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='u');
if(isLowercaseVowel||isUppercaseVowel)
printf("%c is  a vowel",n);
else
pritnf("%c is a consonent",n);
return 0;}
