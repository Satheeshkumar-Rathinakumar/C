#include<stdio.h>

int repeat(int i,int n)
{
    if(i<=n){
  printf("%d\n",i);
  i++;
    }
  repeat(i,n);
}
 int main()

{
  int n,i=1;
  scanf("%d",&n);

      repeat(i,n);
  }



