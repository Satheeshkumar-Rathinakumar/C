#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  gets(s);
  int i;
  int len=strlen(s),num;
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]==' ')
    {
     num=i;
    }
  }
  printf("%d",num);
  char a[num],b[len-num];
  int j=0;
  for(i=0;i<len;i++)
  {
    if(i<num)
    {
        a[i]=s[i];
    }

    else if(i>num)
    {
        b[j]=s[i];
        j++;
    }
  }
  printf("\n");
  puts(a);
  printf("\n");
  puts(b);
}
