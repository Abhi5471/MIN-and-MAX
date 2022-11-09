#include<studio.h>
Void main()
{
 int a[3][3],b[3][3],c[3][3],i,j;
 printf("Enter values of matrix A:\n");
 for(i=0;i<3,i++)
{
 for(j=0;j<3;j++)
{
 printf("%3d",a[i][j]);
}
printf("\n");
}
printf("Enter values of matrix A:\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
    scanf("%d",&b[i][j]);
  }
}
printf("Displaying values of matrix B:\n");
for(i=0,i<3,i++)
{
  for(j=0;j<3;j++)
   {
     printf("%3d",b[i][j]);
   }
  printf("\n");
}
printf("Matrix C is resultant of matrix A+matrix B\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
   {
    c[i][j]=a[i][j]+b[i][j]
   }
}
printf("Matrix c is equal to:\n");
for(i=0;j<3;j++)
 {
   for(j=0;j<3;j++)
   {
     printf("%3d",c[i][j]);
    }
  printf("\n");
}
} 

