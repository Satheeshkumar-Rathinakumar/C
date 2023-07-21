#include<stdio.h>
int main()
{
  char mat[3][4]=[['a','b','c','d'],['a','b','c','d'],['a','b','c','d']];
  for(int i=0;i<3;i++)
  {
     for(int j=0;j<4;j++)
     {
      printf("%c",mat[i][j]);
     }
     printf("\n");
  }
}
