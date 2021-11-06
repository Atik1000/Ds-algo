#include<stdio.h>
int main(){
    int a[10] = {10, 220, 40, 60, 5, 2};
    int i, j, temp;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
    
}