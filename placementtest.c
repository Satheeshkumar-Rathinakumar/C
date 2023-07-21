#include<stdio.h>
void main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  int l,c,i,j;
  scanf("%d %d",&l,&c);
  for(i=0;i<l;i++)
  {
   for(j=0;j<c;j++)
   {
        if(i%2!=0&&j%2!=0)
    {
     printf("* ");
    }
    else if(i%2==0&&j%2==0)
    {
     printf("* ");
    }
    else
    {
        printf(". ");
    }
   }
   printf("\n");
  }
 }
}
