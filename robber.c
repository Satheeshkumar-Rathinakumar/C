#include <stdio.h>
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int maxLoot(int* arr, int n)
{
    if (n < 0)
        return 0;

    if (n == 0)
        return arr[0];
        if(n>0)
        {
    int pick = arr[n] + maxLoot(arr, n - 2);
    int notPick = maxLoot(arr, n - 1);
    return max(pick, notPick);
        }
}
int main()
{
    int size,i;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Maximum loot possible : %d ",
           maxLoot(arr, size- 1));
    return 0;
}
