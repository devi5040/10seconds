#include <stdio.h>
void leftRotateOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 1; i < n; i++)
        arr[i - 1] = arr[i];
    arr[n - 1] = temp;
}
void leftRotate(int arr[], int n, int d)
{
    int i;
    for (i = 0; i < d; i++)
        leftRotateOne(arr, n);
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
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}