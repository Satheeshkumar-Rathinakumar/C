#include<stdio.h>
int main()
{
int s,e,flag;
scanf("%d %d",&s,&e);
int i,j;
for(i=s;i<=e;i++)
{
 for(j=2;j<=i;j++)
 {
     if(i%j==0)
     break;
 }
     if(i==j)
     {
         printf("%d ",i);
     }
}
}
