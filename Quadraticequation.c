#include<stdio.h>
#include<stdlib.h>
void main()
{
	float a,b,c;
	float root1,root2;
	printf("Enter values of a,b and c:");
	scanf("%f%f%f",&a,&b,&c);
	root1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
	root2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
	printf("Quadratic equations=%f%f",root1,root2);
}
