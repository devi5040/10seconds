#include <stdio.h>
void printFreq(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        printf("%d\t%d\n", arr[i - 1], freq);
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
        printf("%d\t%d\n", arr[n - 1], 1);
}
int main()
{
    int i, n, arr[100];
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the array elements in sorted order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Element\tFrequency\n");
    printFreq(arr, n);
}