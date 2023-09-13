#include <stdio.h>
int main()
{
    int n, sum, i, j, cur, arr[100], low, high, mid;
    printf("Enter the array size:\n");
    scanf("%d", &n);
    printf("Enter the array Elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the key element:\n");
    scanf("%d", &sum);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == sum)
        {
            if (arr[mid] == arr[mid - 1])
                high = mid - 1;
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                printf("%d", mid);
                return 0;
            }
        }
        else if (arr[mid] > sum)
            high = mid - 1;
        else
            low = mid + 1;
    }
}