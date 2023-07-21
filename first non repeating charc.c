#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i,j;
    puts(str);
    int count=0;
   for(i=0;str[i]!='\0';i++)
    {

        for(j=i+1;str[i]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;

            }
            if(count==1)
            {
                printf("%c",str[i]);
            }
        }
        count=0;
    }
return 0;
}
