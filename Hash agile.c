#include<stdio.h>
#include<string.h>
int main()
{
 char s[10000];
 scanf("%[^\n]s",s);
 int len=strlen(s);
 printf("%d\n",len);
 int num=0,i,count=0,j;
 int arr[10000];
 for(i=0;i<len;i++)
 {
     if(s[i]==' ')
     {

         arr[num]=i;
         num++;
         count++;
     }
 }

 printf("%d\n",count);
 int num1=0,temp=0,num3=0,count1=0,temp1=count+1;
 arr[count]=len;
 for(i=0;i<count+1;i++)
 {
     printf("%d  ",arr[i]);
 }
 int arr1[temp1];
 printf("\n");
 while(temp1!=0)
 {
 for(i=num1;i<arr[temp];i++)
 {
         if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
         {
            count1++;
         }

 }
         num1=arr[temp]+1;
         temp++;

          arr1[num3]=count1;
          printf("%d ",count1);
          count1=0;
          num3++;
          temp1--;
 }
 printf("\n");
   for(i=0;i<len;i++)
   {
       if(arr1[i]>=3)
       {
           for(j=arr[i-1]+1;j<arr[i];j++)
           {
               printf("%c",s[j]);
           }
       }
   }
}
