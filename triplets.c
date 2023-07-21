#include<stdio.h>
int main()
{
 int t,n,i,j,k,count=0;
 scanf("%d",&t);
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   for(j=i+1;j<n;j++)
   {
     for(k=j+1;k<n;k++)
     {
       if(a[i]+a[j]+a[k]<=t)
       {
           count++;
       }
     }
   }
 }
 printf("%d",count);
}
