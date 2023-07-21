#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);

    int num=1;
    while(m!=0)
    {
        num=num*n;
        m--;
    }
    int temp;

    while((k-1)!=0)
    {

      //  temp=num%10;
        num=num/10;
        k--;
    }
   // printf("%d ",temp);
     printf("%d ",num);
}
