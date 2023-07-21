#include<stdio.h>
int main()
{
 int num,sum;
 scanf("%d",&num);
 int i,j;
 for(i=1;i<=num;i++)
 {
 for(j=1;j<=num;j++)
     {
     if(i==1||i==num||j==1||j==num)
     {
         printf("*");
     }
     else if((i==j)||(i+j)==num+1)
     {
         printf("*");
     }
     else
     {
         printf(" ");
     }
     }
 printf("\n");
}
}
