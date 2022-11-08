#include<stdio.h>
void main()
{
	int i,sum,*p,a[10];
	printf("\nEnter 5 elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	printf("displaying array elements:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p+i));
		sum=sum+*(p+i);
	}
	printf("sum is :%d",sum);
}
