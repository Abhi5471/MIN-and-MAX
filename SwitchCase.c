#include<stdio.h>
void main()
{
	int a,b;
	char ch;
	printf("Enter an operand value a and b:");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("Enter your choice of operation:");
	scanf("%c",&ch);
	switch(ch)
	{
		case'+':printf("%d",(a+b));
		break;
		case'-':printf("%d",(a-b));
		break;
		case'*':printf("%d",(a*b));
		break;
		case'/':printf("%d",(a/b));
		break;
		case'%':printf("%d",(a%b));
		break;
		default:printf("wrong operation symbol");
	}
}
