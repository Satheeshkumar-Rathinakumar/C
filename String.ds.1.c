#include<stdio.h>
#include<string.h>
int main()
{
  char s[1000];
  char goal[1000];
  gets(s);
  gets(goal);
  char temp;
  int i,len1,count=0;
      temp=s[0];
      s[0]=s[1];
      s[1]=temp;
      len1=strlen(s);
      for(i=0;i<len1;i++)
      if(s[i]==goal[i])
      {
         count++;
      }
      else
      {
        count=0;
      }
      if(count==len1)
      {
          printf("true");
      }
      else
      {
        printf("false");
      }
}
