#include<stdio.h>
int main(){
    int LA[] ={5,10,15,20,25},LB=0,UB=4;
    int k=LB;
    while(k<=UB){
        printf("%d\n",LA[k]);
        k++;
    }
    return 0;
}