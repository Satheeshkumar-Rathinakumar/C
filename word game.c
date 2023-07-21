#include<stdio.h>
int main()
{
int i,j;
int n;
scanf("%d",&n);
 char a[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%c",&a[i][j]);
    }
}
return 0;
}
