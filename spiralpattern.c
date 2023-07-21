#include<stdio.h>
int main()
{
 int n,i,j;
 scanf("%d",&n);
 int t=(n*2)-1;
 int a[t][t];
 int r_min=0,r_max=t-1,c_min=0,c_max=t-1;
 //int count=1;
 while(r_min<=r_max)
 {
     for(i=c_min;i<=c_max;i++)
     {
         a[r_min][i]=n;
     }
     for(i=r_min+1;i<=r_max;i++)
     {
         a[i][c_max]=n;
     }
     for(i=c_max-1;i>=c_min;i--)
     {
         a[r_max][i]=n;
     }
     for(i=r_max-1;i>=r_min+1;i--)
     {
         a[i][c_min]=n;
     }
     r_min++;
     c_min++;
     r_max--;
     c_max--;
     n--;
 }
 for(i=0;i<t;i++)
 {
 for(j=0;j<t;j++)
 {
     printf("%d ",a[i][j]);
 }
 printf("\n");
 }
}
