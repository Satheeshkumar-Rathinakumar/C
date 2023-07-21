#include<stdio.h>
int main()
{
 int num,i,low=0,high,search,flag=0;
 scanf("%d",&num);
 int a[num];
 high=num-1;
 for(i=0;i<num;i++)
 {
 scanf("%d",&a[i]);
 }
  scanf("%d",&search);
  while(low<=high)
  {
      int mid;
    mid=(low+high)/2;
  if(search==a[mid])
  {
   flag=1;
  }
  if(search<a[mid])
  {
   high=mid-1;
  }
  else
  {
   low=mid+1;
  }
  }
  if(flag==1)
  {
   printf("search element is found");
  }
  else
  {
  printf("search element is not found");
  }
  return 0;
}
