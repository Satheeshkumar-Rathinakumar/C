#include<stdio.h>
recursive(int a,int b)
{

}
int main()
{
 int size;
 scanf("%d",&size);
 int a[size];
 int i,temp;
 for(i=0;i<size;i++)
 {
    scanf("%d",&a[i]);
 }
 int num1=0,num2=1;

 while(num2<size&&num1<num2)
 {
   temp=a[num1];
   a[num1]=a[num2];
   a[num2]=temp;
   num1=num1+2;
   num2=num2+2;
 }
 for(i=0;i<size;i++)
 {
    printf("%d ",a[i]);
 }
}
