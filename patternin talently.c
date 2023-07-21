#include<stdio.h>
int main()
{
 int num;
 scanf("%d",&num);
 int i,j;
 int a[num][num];
 int count=0;
 int r_min=1,c_min=1,r_max=num,c_max=num;
 for(i=c_min;i<=c_max;i++)
 {
     a[r_min][i]=++count;
 }
 for(i=r_min;i<=r_max;i++)
 {
     a[i][c_max]=count--;
 }
 for(i=c_max;i>=c_min;i--)
 {
     a[r_max][i]=++count;
 }
 for(i=r_max;i>=r_min;i--)
 {
     a[i][c_min]=--count;
 }
 for(i=1;i<=num;i++)
 {
  for(j=1;j<=num;j++)
  {
    printf("%d",a[i][j]);
  }
  printf("\n");
 }
}
