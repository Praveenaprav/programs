
#include<stdio.h>
int main()
{
char c;
int isLowercaseVowel,isUppercaseVowel;
printf("enter an alphabet:");
scanf("%c",&c);
isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c='o'||c='u');
isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='u');
if(isLowercaseVowel||isUppercaseVowel)
printf("%c is  a vowel",c);
else
pritnf("%c is a consonent",c);
return 0;}
