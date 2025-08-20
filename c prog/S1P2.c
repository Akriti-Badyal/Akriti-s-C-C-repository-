
// void swap1( int a, int b){
//    int  c=a;
//         a=b;
//         b=c;
//       printf(" the value of a and b is %d and %d, a,b");
//       swap1(2,4);
// }

#include <stdio.h>
void swap2(int *p, int *q){
        int c = *p;
        *p = *q;
        *q = c;
    }
int main(){

    int a = 2, b = 3;
    printf(" the value of a and b  before swapping is %d and %d", a,b);

    
    swap2(&a, &b);
    printf(" the value of a and b  after swapping is %d and %d", a,b);
    
}
