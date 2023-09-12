#include <stdio.h>

void moveToEnd(int arr[], int n)
{
    int i, temp, count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
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