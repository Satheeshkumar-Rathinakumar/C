#include<stdio.h>
int main()
{
 int a[1000],b,i,sum1=0,sum2=0,ans;
 scanf("%d",&b);
 for(i=0;i<b-1;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=1;i<=b;i++)
 {
  sum2=sum2+i;
 }
  printf("\n%d",sum2);
  for(i=0;i<b-1;i++)
  {
   sum1=sum1+a[i];
  }
  printf("\n%d",sum1);
  ans=sum2-sum1;
  printf("\n%d",ans);
  return 0;
}
