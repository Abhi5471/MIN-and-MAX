#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("Enter the principal amount:\n");
	scanf("%f",&p);
	printf("Enter the time period in years:");
	scanf("%f",&t);
	printf("Enter the rate of interest:\n");
	scanf("%f",&r);
	si=(p*t*r)/100;
	ci=p*(pow(1+r/100,t)-1);
	printf("simple interest=%f\n",si);
	printf("compound interest=%f\n",ci);
	return 0;
}
