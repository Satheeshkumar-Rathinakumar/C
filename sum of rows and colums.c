#include<stdio.h>
int main()
{
 int row,col,i,j,sum1=0,sum2=0;
 scanf("%d %d",&row,&col);
 int a[row][col];
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   sum1=sum1+a[i][j];
  }
  printf(" row total %d",sum1);
  printf("\n");
  sum1=0;
 }
 printf("\n");
for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   sum2=sum2+a[j][i];
  }
  printf("column total %d",sum2);
  printf("\n");
  sum2=0;
 }
 printf("\n");
}

