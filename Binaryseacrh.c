#include<stdio.h>
void main() 
{
int list[]={10,20,30,40,50,60,70};
int n;
printf("Enter the number to be searched in the list:");
scanf("%d",&n);
int low=0;
int high=(sizeof(list)/sizeof(list[0]))-1;//6 here
int middle=(low+high)/2; 
while(low<=high)
{
if(n>list[middle])
{
low=middle+1;
}
else if(n==list[middle]) 
{
printf("%d is found at the index %d",n,middle);
break;
}
else
{
high=middle-1;
}
middle=(low+high)/2;
}//while
if(low>high)
printf("%d is not found in the list",n);
}//main
