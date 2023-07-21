#include<stdio.h>
int main()
{
  int num,sum=0;
  scanf("%d",&num);
  while(num!=0)
  {
    sum=sum+(num-1);
    num--;
  }
  printf("%d",sum);
}
