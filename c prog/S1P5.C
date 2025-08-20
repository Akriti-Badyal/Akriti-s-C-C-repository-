#include <stdio.h>
int max(int *a, int *b, int *c)
{
    int max = 0;
    if (*a > *b && *a > *c)
        {
            max = *a;
        }
    else if (*b > *a && *b > *c)
        {
            max = *b;
        }
        else{
            max = *c;
        }
        return max;
}
 int main(){
     int a=10, b=45, c=56;
     int max_number = max(&a, &b, &c);
     printf(" %d is the maximum number", max_number);

 }
