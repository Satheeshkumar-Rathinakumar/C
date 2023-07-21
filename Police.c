#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num)
    char str[num];
    for(int i=0;i<num;i++)
    {
        scanf("%c",&str[i]);
    }
    for(int i=0;i<num;i++)
    {
        printf("%c",str[i]);
    }

}
