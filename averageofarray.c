#include<stdio.h>

int main()
{
int size;
scanf("%d",&size);
int a[size];
int i;
for(i=0;i<size;i++)
{
  scanf("%d",&a[i]);
}
int sum=0;
for(i=0;i<size;i++)
{
  sum=sum+a[i];
}
int avg;
avg=sum/size;
printf("%d",avg);
printf("\n");
for(i=0;i<size;i++)
{
  if(a[i]==avg)
  {
      printf("%d",a[i+1]);
  }
}
}
