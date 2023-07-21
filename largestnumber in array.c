#include<stdio.h>
int main()
{
 int num,i;
 scanf("%d",&num);
 int a[num];
 for(i=0;i<num;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<num;i++)
 {
  if(a[0]<a[i])
  {
    a[0]=a[i];
  }
 }
 printf("%d",a[0]);
}
