#include<stdio.h>
int main()
{
 int a,b,c[1000],d[1000],i,j,temp,flag;
 scanf("%d \n%d",&a,&b);
 for(i=0;i<a;i++)
 {
  scanf("%d",&c[i]);
 }
  for(i=0;i<b;i++)
  {
  scanf("%d",&d[i]);
  }
  for(i=0;i<a;i++)
  {
   for(j=i+1;j<a;j++)
   {
    if(c[i]>=c[j])
    {
     temp=c[i];
     c[i]=c[j];
     c[j]=temp;
    }
   }
   printf("%d",c[i]);
  }
  for(i=0;i<b;i++)
  {
   for(j=i+1;j<b;j++)
   {
    if(d[i]>=d[j])
    {
     temp=d[i];
     d[i]=d[j];
     d[j]=temp;
    }
   }
   printf("%d",d[i]);
  }
  for(i=0;i<a;i++)
  {
      if(c[i]!=d[i])
      {
         flag=1;
         break;
      }
  }
  if(flag==1)
      {
          printf("Arrays are not equal");
      }
      else
      {
          printf("Arrays are  equal");
      }
}
