#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 elements:");
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    int *p=arr;
    printf("your elements are:");
    for(int i=0; i<5;i++){
        printf("\n%d", *p);
        p++;
    }
}