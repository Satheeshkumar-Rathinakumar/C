#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int num1=1,num2=1;
while(b>0)
{
num1=num1*a;
b--;
}
printf("\n%d",num1);
while(c>0)
{
num2=num2*10;
c--;
}
printf("\n%d",num2);
int ans;
ans=num1%num2;
printf("\n%d",ans);
}
