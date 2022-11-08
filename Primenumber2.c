#include<stdio.h>
int main()
{
	int f,n;
	int count=0;
	printf("Enter number:");
	scanf("%d",&n);
	for(f=1;f<=n;f++)
	{
		if(n%f==0)
		count++;
	}
	if(count==2)
	{
		printf("The given number %d is a prime number",n);
	}
	else
	{
		printf("The given number %d is not a prime number",n);
	}
	return 0;
}
