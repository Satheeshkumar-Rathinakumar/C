#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
int i,j,h;
h=(num/2)+1;
for(i=0;i<num;i++)
{
 for(j=0;j<=num;j++)
 {
  if(i==0||i==num-1)
  {
   printf("@ ");
  }
  else if(i!=0&&i!=num-1)
  {
   for(j=0;j<=h;j++)
  {
      printf(" ");
      h=h-2;
  }
  }
  else
  {
      printf("#");
  }
}
printf("\n");
}
}
