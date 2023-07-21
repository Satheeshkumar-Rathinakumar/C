#include<stdio.h>
int main()
{
 int i,j,k,m,a[1000],temp;
 scanf("%d",&m);
 for(i=0;i<m;i++)
 {
  scanf("%d",a[i]);
 }
 for(i=0;i<m;i++)
 {
 for(j=i+1;j<m;j++)
 {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
 }
 }
}
