#include<stdio.h>
void main()
{
	int a[5],*p,i;
	printf("%d",p);
	p=a;
	printf("Enter 5 values:");
	for(i=0;i<5;i++)
	{
		scanf("%d",(p+i));
	}
	printf("Displaying values using array in reverse order:\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",*(p+i));
	}
}
