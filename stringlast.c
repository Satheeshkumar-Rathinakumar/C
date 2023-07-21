#include<stdio.h>
#include<string.h>
int main()
{
 char s[100];
 gets(s);
 puts(s);
 int a,count=0,i,j;
 int len;
 len=strlen(s);
 while(s[100]!='\0')
 {
  if(s!=' ')
  {
  count++;
  }
  else
  {
   count=0;
  }
 }
 printf("%d",len);
 for(i=len-count;i<len;i++)
 {
     printf("%c",s[i]);
 }
 return 0;
}
