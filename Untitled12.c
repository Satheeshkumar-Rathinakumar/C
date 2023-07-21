#include<stdio.h>
int main()
{
 int num,temp,count=0;
 scanf("%d",&num);
 while(num)
 {
 temp=num%2;
 count++;
 num=num/10;
 }
 printf("%d",count);
}
