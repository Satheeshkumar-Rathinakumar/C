#include<stdio.h>
int main()
{
 int a[1000],b[1000],n,m,sum,i,j;
 scanf("%d %d",&n,&m);
 sum=n+m;
 for(i=0;i<n;i++)
 {
 scanf("%d",a[i]);
 }
 for(i=0;i<m;i++)
 {
 scanf("%d",b[i]);
 }
 for(i=n,j=0;i<sum,j<m;i++,j++)
 {
  a[i]=b[j];
 }
 for(i=0;i<sum;i++)
 {
  printf("%d",a[i]);
 }
}
