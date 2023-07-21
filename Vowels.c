#include<stdio.h>
#include<string.h>
int main()
{
 char s[100];
 gets(s);
 for(int i=0;s[i]!='\0';i++)
 {
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
     {
         s[i]=s[i]-32;
     }
 }
 puts(s);
}
