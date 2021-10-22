#include <header.h>
#include <stdio.h>

int main()
{
    int arr[] = {4, 3, 5, 1, 21, 13, -4};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);

    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}