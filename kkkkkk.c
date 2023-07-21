// Online C compiler to run C program online
#include <stdio.h>
pow(int n,int k,int d)
{
    int temp=k,temp2=1,i,res,ans;
    for(i=0;i<k;i++)
    {
        temp2=temp2*temp;
    }
    res=temp2;
   if(res<n)
   {
       ans=sec(n,k,d,res);
   }
   if(res==n)
   {
       d=0;
      ans=sec(n,k,d,res);
   }
   if(ans!=0)
   {
       printf("YES");
       printf("\n");
   }
   else
   {
       printf("NO");
         printf("\n");
   }
}
sec(int n,int k,int d,int res)
{
    int count=0;
    if(n>d*d)
    {
        int l=d*d;
        int temp1=n-l;
    if(res==temp1)
    {
       count++;
       return count;
    }
    else
    {
        d++;
        sec(n,k,d,res);
    }
    }
    else
    {
        k++;
        d=1;
        pow(n,k,d);
    }

}
int main() {
    int num=19;
    int k=1,d=1;
    pow(num,k,d);
}
