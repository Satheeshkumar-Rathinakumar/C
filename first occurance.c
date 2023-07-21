#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char toRemove[100];
    gets(str);

    gets(toRemove);

    int i,j;
    int found = 0;

   int  len = strlen(str);
    int removeLen = strlen(toRemove);

    for(i=0; i<len; i++)
    {
        found = 1;
        for(j=0; j<removeLen; j++)
        {
            if(str[i+j] != toRemove[j])
            {
                found = 0;
                break;
            }
        }


        if(found == 1)
        {
            for(j=i; j<=len-removeLen; j++)
            {
                str[j] = str[j + removeLen];
            }
            break;
        }

    }
    puts(str);
    return 0;
}
