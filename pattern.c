#include<stdio.h>
int main()
{
 int num1,num2,num3,i,j;
 scanf("%d",&num1);
 num2=num1-1;
 num3=num2+num3;
 for(i=1;i<=num1;i++)
 {
  for(j=1;j<=num3;j++)
  {
   if(i+j<=num1)
   {
    printf(" ");
   }
   else
   {
   printf("*");
   }
  }
 }
}
