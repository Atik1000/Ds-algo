#include <stdio.h>
int main()
{
    int LA[7] = {5, 10, 15, 20, 25}, N = 5, K = 3, item;
    item = LA[K];
    int J;
    for (J = K; J <= N - 1; J++)
    {
        LA[J] = LA[J + 1];
    }

    N = N - 1;
    printf("Item delete is %d\n", item);
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d ", LA[i]);
    }
    return 0;
}
