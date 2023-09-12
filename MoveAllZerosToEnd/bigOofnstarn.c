#include <stdio.h>
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void moveToEnd(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                    swap(&arr[i], &arr[j]);
            }
        }
    }
}
int main()
{
    int i, arr[100], n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    moveToEnd(arr, n);
    printf("The output is:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
}