#include <stdio.h>
int main()
{
    int n, sum, i, j, cur, arr[100];
    printf("Enter the array size:\n");
    scanf("%d", &n);
    printf("Enter the array Elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the sum:\n");
    scanf("%d", &sum);
    for (i = 0; i < n; i++)
    {
        cur = 0;
        for (j = i; j < n; j++)
        {
            cur += arr[j];
            if (cur > sum)
                break;
            if (sum == cur)
                printf("The sub arrays starts from %d to %d", i, j);
        }
    }
}