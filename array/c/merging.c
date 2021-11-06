#include <stdio.h>
int main()
{
    int num1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num3[21];
    // merge num1 and num2 into num3
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < 10 && j < 10; k++)
    {
        if (num1[i] < num2[j])
        {
            num3[k] = num1[i];
            i++;
        }
        else
        {
            num3[k] = num2[j];
            j++;
        }
    }
    // copy the remaining elements of num1
    while (i < 10)
    {
        num3[k] = num1[i];
        i++;
        k++;
    }
    // copy the remaining elements of num2
    while (j < 10)
    {
        num3[k] = num2[j];
        j++;
        k++;
    }
    // print the merged array
    for (i = 0; i < 20; i++)
    {
        printf("%d ", num3[i]);
    }   
    return 0;
}
