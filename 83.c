#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("\n enter the values:");
	scanf("%d %c %d",&a,&op,&b);
	switch(op)
	{
        case '%':
		c=a%b;
		printf("\n %d",c);
		break;
        case '/':
		c=a/b;
		printf("%d",c);
		break;
	default:
		printf("");
	}return 0;
}
		
