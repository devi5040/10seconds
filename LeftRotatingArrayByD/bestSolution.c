#include <stdio.h>
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(&arr[low], &arr[high]);
        low++;
        high--;
    }
}
void leftRotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
int main()
{
    int arr[100], i, n, d;
    printf("Enter the arraysize:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the d value:\n"); // The number of left rotations
    scanf("%d", &d);
    leftRotate(arr, n, d);

    // print the output
    printf("The Output is:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}