#include<stdio.h>
void main()
{
	int i,j,n,count;
	printf("Enter maximum range:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		count=0;
		for(j=2;j<i/2;j++)
		{
			if(i%j==0)
		{
			count++;
			break;
			}	
		}
		if(count==0 && i!=1)
		printf("%d\t",i);
	}
}
