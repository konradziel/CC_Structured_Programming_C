#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double im;
    double re;
} complexNum;

complexNum sum(complexNum *c1, complexNum *c2){
    complexNum result;
    result.re = c1->re + c2->re;
    result.im = c1->im + c2->im;
    return result;
}

int main() {
    complexNum c1 = {2.0, 3.0};
    complexNum c2 = {4.5, -1.5};

    complexNum result = sum(&c1, &c2);

    printf("Sum: %.2lf + %.2lfi\n", result.re, result.im);

    return 0;
}
