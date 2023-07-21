#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  scanf("%[^\n]s",s);
  int len=strlen(s);
  puts(s);
  int i;
  for(i=0;i<len;i++)
  {
      if(i==0&&s[i]>96)
      {
        s[i]=s[i]-32;
      }
      else if(s[i]==' '&&s[i+1]>96)
      {
          s[i+1]=s[i+1]-32;
      }
  }
  puts(s);
}
