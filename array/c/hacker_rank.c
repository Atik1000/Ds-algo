// reverse array elements
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}








































// // 10 student  quiz contest. 100 quiz submissions. initial value 0 .which student is highest.

// #include <stdio.h>
// int main()
// {
//     int student[10], quiz[100];
//     int i, j, max, max_index;
//     for (i = 0; i < 10; i++)
//     {
//         student[i] = 0;
//     }
//     for (i = 0; i < 100; i++)
//     {
//         scanf("%d", &quiz[i]);
//     }

    
//     for (i = 0; i < 100; i++)
//     {
//         max = 0;
//         max_index = 0;
//         for (j = 0; j < 10; j++)
//         {
//             if (student[j] > max)
//             {
//                 max = student[j];
//                 max_index = j;
//             }
//         }
//         student[max_index] += quiz[i];
//     }
//     max = 0;
//     max_index = 0;
//     for (i = 0; i < 10; i++)
//     {
//         if (student[i] > max)
//         {
//             max = student[i];
//             max_index = i;
//         }
//     }
//     printf("%d", max_index + 1);
//     return 0;

// }


