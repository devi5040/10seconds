#include <stdio.h>
int main()
{
    int n, sum, i, j, s = 0, arr[100], cur = 0;
    printf("Enter the array size:\n");
    scanf("%d", &n);
    printf("Enter the array Elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the sum:\n");
    scanf("%d", &sum);
    for (i = 0; i < n; i++)
    {
        cur += arr[i];
        while (sum < cur)
        {
            cur -= arr[s];
            s++;
        }
        if (cur == sum)
        {
            printf("%d %d", i, s);
        }
    }
}