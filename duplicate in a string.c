#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "big black bug bit a big black dog on his big black nose";
    char words[100][100];
    int i = 0, j = 0, k, length, count;
    for(k=0; string[k]!='\0'; k++)
    {

        if(string[k] != ' ' && string[k] != '\0')
        {

            words[i][j++] = tolower(string[k]);
        }
        else{
            words[i][j] = '\0';
            i++;
            j = 0;
        }
    }

    length = i+1;

    for(i=0;i<length;i++)
    {
        printf("%s\n",words[i]);
    }
    for(i = 0; i < length; i++)
        {
        count = 1;
        for(j = i+1; j < length; j++)
        {
           if(words[i]==words[j])
           {
               count++;
           }
        }
        }
        if(count > 1 )
        {
            printf("%s %d\n", words[i],count);
        }


    return 0;
}
