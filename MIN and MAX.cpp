#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c;
  printf(" enter three numbers: "); 
  scanf("%d%d%d",&a,&b,&c);
  if ((a>b) && (a>c)) 
  printf("max=%d\n",a);
  else if((b>a) &&(b>c)) 
  printf("max=%d\n",b);
  else
  printf("max=%d",c);
  if((a<b) && (a<c))
  printf("min=%d",a);  
  else if ((b<a) && (b<c))
  printf("min =%/d\n", b);
  else
printf("min=%d",c);
return 0;  
}
