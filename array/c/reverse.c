#include<stdio.h>
int main()
{
    int a[10],i,n,j;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        j=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=j;
    }
    printf("The array after reversing is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}