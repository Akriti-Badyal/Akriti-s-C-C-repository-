#include <stdio.h>

// void reverse(int *arr, int n)
// {
//     for (int i = 0; i <= n / 2; i++)
//     {
//         int c = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = c;
//     }
// }

void reverse(int *arr, int n)
{
    int *start = arr;
    int *end = &arr[n - 1];
    while (start < end)
    {
        int c = *start;
        *start = *end;
        *end = c;
        start++;
        end++;
    }
}
int main()
{
    int n;
    scanf("Enter Number of elements%d", &n);
    int arr[n];
    printf("Enter  elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, 3);
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("\n %d", *p);
        p++;
    }
}