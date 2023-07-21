#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  char s[1000];
  //while(num!=0)
  //{
     gets(s);
     int len=0,num1=0,num2=0,num3=0;
     int i,j;
     int count1=1,count2=0;
     for(i=0;s[i]!='\0';i++)
     {
         len++;
     }
     /////////////////////////////////////////////////////////////////////////////////////////////
     for(i=0;i<len;i++)
     {
         if(s[i]=='*')
         {
             num1++;
         }
         if(s[i]=='(')
         {
             num2++;
         }
         if(s[i]==')')
         {
             num3++;
         }
     }
     printf("\n%d*",num1);
     printf("\n%d(",num2);
     printf("\n%d)",num3);
     ///////////////////////////////////////////////////////////////////////////////////////////
         if(num2==num3)
         {
             printf("YES");
         }
         int temp=len;
         if(num3>num2)
         {
             for(i=len;i>=0;i--)
             {
                 if(s[i]=='*')
                 {
                     s[i]='(';
                 }
             }
         }
         if(num2>num3)
         {
             for(i=0;i<len;i++)
             {
                 if(s[i]=='*'&&count1<=num2)
                 {
                     s[i]=')';
                     count1++;
                 }
             }
         }
         puts(s);
  //}
}
