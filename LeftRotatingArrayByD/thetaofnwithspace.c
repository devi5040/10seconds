#include <stdio.h>
void leftRotate(int arr[], int n, int d)
{
    int temp[100], i;
    for (i = 0; i < d; i++)
        temp[i] = arr[i];
    for (i = d; i < n; i++)
        arr[i - d] = arr[i];
    for (i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
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