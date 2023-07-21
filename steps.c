#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  if(num%2==0)
  {
    printf("%d",num/2);
  }
  else
  {
   printf("%d",num/2+num%2);
  }
}
