#include<stdio.h>
int main()
{
 int n,i,j;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=n-1;j>=i;j--)
  {
  printf(" ");
  }
  int m=2*i-1;
  for(j=1;j<=m;j++)
  {
  printf("*");
  }
  printf("\n");
}
return 0;
}
