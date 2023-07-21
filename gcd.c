#include<stdio.h>
 gcd(int num1,int num2)
{
  if(num2==0)
  {
   return(num1);
  }
  else
  {
   return(gcd(num2,num1%num2));
  }
}
 int main()
 {
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d",gcd(a,b));
 }
