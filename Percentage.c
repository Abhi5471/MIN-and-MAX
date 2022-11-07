#include <stdio.h>
void main()
{
 float M,PPS,EG,AP,ES;
 float total_marks=500.0,percentage,obtained_marks;
 printf("enter marks for each subject M, PPS, EG, AP,ES:"); 
 scanf("%f%f%f%f%f", &M,&PPS, &EG, &AP,&ES);
obtained_marks=M+PPS+ EG+AP+ES;
percentage=(obtained_marks/total_marks)*100; 
printf("%f",percentage);
if(percentage<=40)
   printf("Fail");
   if(percentage>40 && percentage<=60)
   printf("Second class");
    if(percentage>60 && percentage<70)
       printf("first class");
	    if(percentage>=70)
		  printf("Distinction");
}
		      
