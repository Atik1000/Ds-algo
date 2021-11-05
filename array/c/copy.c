
#include <stdio.h>
int main()
{
    int arr1[30], arr2[30], i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    for (i = 0; i < 5; i++)
    {
        printf("  %d ", arr1[i]);
    }
    printf("\nArray 2: ");

    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", arr2[i]);
    }
}
