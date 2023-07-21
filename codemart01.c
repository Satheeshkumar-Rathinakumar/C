#include<stdio.h>
int possibility(int a,int b);
int possibility(int a,int b)
{
int num=a;
int count2=0;
while(num!=-1)
{
  int clr1=1;
  int clr2=2;
  int count1=0;

  int arr[a],arr1[a];
  int i,j;

  for(i=0;i<a+1;i++)
  {
  arr[i]=clr1;
  }

   for(i=0;i<a+1;i++)
  {
  arr1[i]=clr2;
  }
  if(num<a)
  {
    for(i=0;i<a;i++)
    {
        if(i==num)
        {
            arr[i]=clr2;
        }
    }

  }

  if(num<a)
  {
    for(i=0;i<a;i++)
    {
        if(i==num)
        {
            arr1[i]=clr1;
        }
    }

  }
  for(i=0;i<a;i++)
  {
  printf("%d",arr[i]);
  }
    printf("\n");
    for(i=0;i<a;i++)
    {
        if(arr[i]=clr1)
        {
            count1++;
        }
    }
    ptintf("%d",count1);
    if(count1==b)
    {
        count2++;
    }
    printf("%d",count2);
  /*  for(i=0;i<a;i++)
  {
  printf("%d",arr1[i]);
  }
  printf("\n");*/
  num--;

  }
}
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  possibility(n,k);
}
