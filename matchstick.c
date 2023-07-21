#include<stdio.h>
int check(int n)
{
 switch(n)
 {
   case 0:
   {
   return 6;
   }
   case 1:
   {
   return 2;
   }
   case 2:
   {
   return 5;
   }
   case 3:
   {
   return 5;
   }
   case 4:
   {
   return 4;
   }
   case 5:
   {
   return 5;
   }
   case 6:
   {
    return 6;
   }
   case 7:
   {
   return 3;
   }
   case 8:
   {
   return 7;
   }
   case 9:
   {
   return 6;
   }
 }
}
int main()
{
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  int add=num1+num2;
  int rem,sum=0;
  while(add!=0)
  {
   rem=add%10;
   sum=sum+check(rem);
   add=add/10;
  }
  printf("%d",sum);
}
