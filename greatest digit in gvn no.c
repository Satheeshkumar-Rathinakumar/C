#include<stdio.h>
int main()
{
  int num,num1;
  printf("enter the number : ");
  scanf("%d",&num);
  printf("required no of digit : ");
  scanf("%d",&num1);
  int i=0,j,n=0,temp=num,a[100];
  while(temp!=0)
  {
   a[i]=temp%10;
   temp=temp/10;
   i++;
   n++;
  }
  printf("Array a =");

  for(i=0;i<n;i++)
  {
      printf("%d ",a[i]);
  }
  int b[n];
  printf("\n Array b =");
  for(i=0,j=n-1;i<n,j>=0;i++,j--)
  {
   b[i]=a[j];
  }
  for(i=0;i<n;i++)
  {
      printf("%d ",b[i]);
  }
  int last=n-(num1-1);
  int c[last];
  for(i=0;i<last;i++)
  {
   int s=num1;
   int sum=0;
   int temp1=i;
   while(s!=0)
   {
    sum=sum*10+b[temp1];
    s--;
    temp1++;
   }
   c[i]=sum;
  }
  printf("\n Array c before sort =");
   for(i=0;i<last;i++)
  {
      printf("%d ",c[i]);
  }

  int t=0;
  for(i=0;i<last;i++)
  {
    for(j=i+1;j<last;j++)
    {
        if(c[i]>c[j])
        {
            t=c[i];
            c[i]=c[j];
            c[j]=t;
        }
    }
  }
  printf("\n Array c after sort =");
  for(i=0;i<last;i++)
  {
      printf("%d ",c[i]);
  }
  printf("\n The greatest %d digit odd number = ",num1);
  for(i=last-1;i>=0;i--)
  {
      if(c[i]%2!=0)
      {
          printf("%d",c[i]);
          break;
      }
  }
}
