#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int i,j;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n+1;j++)
  {
  if(i%2==0&&j==1)
  {
   printf("%d",i+1);
  }
  else if(i%2!=0&&j==n+1)
  {
      printf("%d",i+1);
  }
  else{
    printf("%d",i);
  }
  }
  printf("\n");
 }
}
