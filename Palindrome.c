#include<stdio.h>
void main()
{
	int n,remainder,temp,reverse=0,sum=0;
	printf("Enter a positive integer");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		remainder=n%10;
		sum=sum+remainder;
		reverse=reverse*10+remainder;
		n=n/10;
	}
	printf("Sum of the digits is %d\n",sum);
	printf("%d",temp);
	if(temp==reverse)
	  printf("is a palindrome");
	  else
	  printf("is not a palindrome");
}
