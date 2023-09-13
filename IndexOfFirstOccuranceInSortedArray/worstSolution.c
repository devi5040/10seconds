#include <stdio.h>
int main()
{
    int n, sum, i, j, cur, arr[100];
    printf("Enter the array size:\n");
    scanf("%d", &n);
    printf("Enter the array Elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the key element:\n");
    scanf("%d", &sum);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == sum)
        {
            printf("%d", i);
            return 0;
        }
    }
}