#include<stdio.h>
int main(){
    int LA[7] = { 5,10,15,20,25}, N = 5, K = 3, item = 100;
    int J = N;
    while(J >= K){
        LA[J + 1] = LA[J];
        J--;
    }
    LA[K] = item;
    N = N + 1;
    int i;
    for(i = 0; i <= N; i++){
        printf("%d ", LA[i]);
    }
    return 0;
}