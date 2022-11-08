#include<stdio.h>
int main()
{
	int t1=0,t2=1,t3,count=2,n;
	printf("Enter the n term to see fibonacci series:");
	scanf("%d",&n);
	printf("Fibonacci series:");
	printf("%d\t%d",t1,t2);
	do
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
		printf("\t%d",t3);
		count++;
	}while(count<n);
	return 0;
}
