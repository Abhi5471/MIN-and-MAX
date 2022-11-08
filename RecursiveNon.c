#include<stdio.h>
#include<conio.h>
void fact(int n){
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("\tFactorial of %d without recursion is %d\n",n,f);
}
int factorial(int n){
	if(n==1){
		return 1;
	}
	return n*factorial(n-1);
}
int main(){
	int n,result;
	printf("Enter any number:");
	scanf("%d",&n);
	fact(n);
	result=factorial(n);
	printf("\t\nFactorial of %d with recursion is %d",n,result);
	return 0;
}
