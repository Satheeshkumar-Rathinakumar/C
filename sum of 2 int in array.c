#include<stdio.h>
int main()
{
 int ar[]={5,7,1,2,8,4,3};
 int len=sizeof(ar)/sizeof(ar[0]);
 int sum,t=0;
 scanf("%d",&sum);
 int i,j,count=0;
 int temp=len-1;
 for(i=temp;i>0;i--)
 {
     t=t+i;
 }
 for(i=0;i<len;i++)
 {
  for(j=i+1;j<len;j++)
  {
    if(ar[i]+ar[j]==sum)
    {
    printf("%d + %d = %d",ar[i],ar[j],ar[i]+ar[j]);
    printf("\n");
    }
    else
    {
     count++;
    }
  }
 }
 if(count==t)
 {
  printf("N0 2 values sum up to %d",sum);
 }
}
