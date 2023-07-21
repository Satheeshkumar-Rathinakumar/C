#include<stdio.h>
int main()
{
 int n=5,mid;
 mid=n/2;
 int i,j,s;
 for(i=0;i<n;i++)
 {
  for(s=mid;s>=i;s--)
  {
   printf(" ");
  }
  for(j=0;j<2*i+1;j++)
  {
   if(j==mid)
   {
       printf("* ");
   }
  }
  printf("\n");
 }
}
