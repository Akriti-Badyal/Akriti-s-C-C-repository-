#include <stdio.h>

int sum(int *a, int *b)
{
      *a = *a + *b;
}
int main()
{
      int a = 5;
      int b = 12;

      sum(&a, &b);
      printf(" the sum is %d", a);
}
