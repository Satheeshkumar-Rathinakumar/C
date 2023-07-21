#include<stdio.h>
int main()
{
    int size,i;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(i==0&&arr[i]!=5)
        {
            printf("false");
        }
        if(i>0&&arr[i]>5)
        {
          arr[i]=arr[i]-arr[i-1];
          arr[i-1]=0;
        }
    }
      int sum=0;
     for(i=0;i<size-1;i++)
    {
       if(arr[i]!=0)
       {
           sum=sum+arr[i];
       }
    }
    if(arr[size-1]-sum==5)
    {
        printf("true");
    }
    else{
        printf("false");
    }
}
