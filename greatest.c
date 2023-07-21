#include<stdio.h>
int main()
{
  int num,i;
  scanf("%d",&num);
  int arr[num];
  for(i=0;i<num;i++)
  {
   scanf("%d",&arr[i]);
  }
  for(i=0;i<num;i++)

  {
      if(i==num-1)

          {
                  printf("the next greatest num of %d is -1 \n",arr[i]);
          }
          int next=-1;
      for(int j=i+1;j<num;j++)
      {
         // int next=-1;

          if(arr[j]>arr[i])
          {
              printf("the next greatest num of %d is %d \n",arr[i],arr[j]);
              break;
          }
         /* else
          {
              printf("the next greatest num of %d is -1 \n",arr[i]);
               break;
          }
          {

          }*/
          printf("the next greatest num of %d is %d \n",arr[i],next);
      }


  }


}
