#include<stdio.h>
int main()
{
    int s,r;
    scanf("%d %d",&s,&r);
    int a[s],i;
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    while(r!=0)
    {
        int min,max,count=0;
        scanf("%d %d",&min,&max);
        for(i=0;i<s;i++)
        {
            if(a[i]>=min&&a[i]<=max)
            {
                count++;
            }
        }
        printf("%d\n",count);
       r--;
    }
}
