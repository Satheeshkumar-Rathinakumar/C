#include<stdio.h>
int sum(int ar[],int l,int num ,int temp,int temp2);

int main()
{
  int num,count=1,i,l=5;
  scanf("%d",&num);
  int ar[l];
  for(i=0;i<l;i++)
  {
   ar[i]=count;
   count++;
  }
    int temp=ar[0];
    int temp2=ar[4];
  int res=sum(ar,l,num,temp,temp2);
  if(res==0)
  {
      printf("Thumb Finger");
  }
  if(res==1)
  {
      printf("Index Finger");
  }
  if(res==2)
  {
      printf("Middle Finger");
  }
  if(res==3)
  {
      printf("Ring Finger");
  }
  if(res==4)
  {
      printf("Small Finger");
  }
}
int sum(int ar[],int l,int num ,int temp,int temp2)
{
   if(temp<num||temp2>num)
   {
       ar[0]=ar[0]+8;
       ar[1]=ar[1]+6;
       ar[2]=ar[2]+4;
       ar[3]=ar[3]+2;
   }
   if(temp>num||temp2<num)
   {
       ar[4]=ar[4]+8;
       ar[3]=ar[3]+6;
       ar[2]=ar[2]+4;
       ar[1]=ar[1]+2;
   }
   if(num>=ar[0]&&num<=ar[4])
   {
       int i;
       for(i=0;i<5;i++)
       {
          if(ar[i]==num)
          {
              return i;
          }
       }
   }
   else
   {
       sum(ar,l,num,temp,temp2);
   }
}



