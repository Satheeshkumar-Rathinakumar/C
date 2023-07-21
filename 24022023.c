#include<stdio.h>
int main()
{
    int size;
    size=5;
 int a[5]={1,2,3,4,5},b[5];
 int i,j,num=2;
 for(i=0;i<num;i++)
 {
   b[i]=a[(size-num)+i];
 }
 for(i=num;i<size;i++)
 {
  b[i]=a[i-2];
 }
 printf("\n");
 for(i=0;i<size;i++)
 {
 printf("%d",b[i]);
 }
}
