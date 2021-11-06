#include <stdio.h>
int main()
{
    int a[3][5];

    int row, col;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 5; col++)
        {
            printf("Enter element [%d][%d]: ", row, col);
            scanf("%d", &a[row][col]);
        }
    }

    printf("\nThe array is:\n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 5; col++)
        {
            printf("%d\t", a[row][col]);
        }
        printf("\n");
    }
}

