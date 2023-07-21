#include<stdio.h>
int main()
{
int x,y,count=0,flag,m,i,j;
scanf("%d %d",&x,&y);
int a[x][y];
for(i=0;i<x;i++)
{
 for(j=0;j<y;j++)
 {
  scanf("%d",&a[i][j]);
  if(a[i][j]==1)
  {
   count=count+1;
   flag!=1;
   m=count;
   count=0;
  }
 }
}
if(flag!=1)
{
 printf("%d",m);
}
}
