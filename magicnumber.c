#include<stdio.h>
int main()
{
   long long int num;
    scanf("%lld",&num);
    long long int num2=num;
    long long int rem,rev=0,rem1;
    long long int temp=0,magic;
    while(num!=0)
    {
       rem=num%10;
       temp=temp+rem;
       num=num/10;
    }
    printf("%lld ",temp);
   long long int temp2=temp;
    while(temp2!=0)
    {
       rem1=temp2%10;
       rev=rev*10+rem1;
       temp2=temp2/10;
    }
    printf("\n%lld",rev);
    magic=temp*rev;
    printf("\n%lld",magic);
    if(magic==num2)
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }
    return 0;
}
