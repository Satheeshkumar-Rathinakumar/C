#include <stdio.h>
void printSubsets(int arr[], int n)
 {
    for (int i = 0; i < (1 << n); i++)
     {
        printf("{ ");
        for (int j = 0; j < n; j++)
         {
            if (i & (1 << j))
            {
                printf("%d ", arr[j]);
            }
         }
        printf("}\n");
    }
}
int main()
{
    int arr[] = {2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printSubsets(arr, n);
    printf("%d",(1<<n));
}
n
