#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  int i,j,k;
  int m=num*2;
  for(i=1;i<=num;i++)
  {
    for(j=num;j>=i;j--)
    {
     printf("* ");
    }

    printf("\n");
}
for(k=1;k<=num;k++)
    {
        for(j=k;j<=num;j++)
        {
            printf("* ");
        }
    printf("\n");
    }
}
