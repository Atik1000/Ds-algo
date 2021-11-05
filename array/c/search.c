#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[7] = {1, 2, 3, 4, 5, 6, 7};
    int pos = -1;
    int i, find;
    printf("Enter the number to be searched: ");
    scanf("%d", &find);

    for (i = 0; i < 7; i++)
    {
        if (num[i] == find)
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Not found");
    }
    else
    {
        printf("Found at %d", pos);
    }
}