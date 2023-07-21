#include<stdio.h>
int main()
{
  int test,num;
  scanf("%d",&test);
  scanf("%d",&num);
  int i;
  int a[3];
  while(test!=0)
  {
    while(num!=0)
    {
        int b[3]={0,0,0};
        for(i=0;i<3;i++)
        {
            scanf("%d ",&a[i]);
        }
     num--;
    for(i=0;i<3;i++)
       {
         b[i]=a[i];
         printf("%d",b[i]);
       }
    }
    test--;
  }

}
