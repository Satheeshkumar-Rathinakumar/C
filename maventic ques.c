#include<stdio.h>
int main()
{
    int n,i,k;
    int a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);

    while(k!=0)
    {
        int temp=0;
        for( i=1;i<=n;i++)
        {
            a[i]=temp;
            a[i]=a[i+1];
            a[i+1]=temp;
        }
         for(i=1;i<=n;i++)
       {
        printf("%d ",a[i]);
       }
    printf("\n");
     k--;
    }


    return 0;
}
