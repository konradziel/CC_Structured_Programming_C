#include <stdio.h>
#include <stdlib.h>

double *foo(int n) {
    return malloc(n*sizeof(double));
}

int main(){
    double * x = foo(5);
    printf("%p\n", x);
    printf("%Iu\n", sizeof(x));
    return 0;
}
