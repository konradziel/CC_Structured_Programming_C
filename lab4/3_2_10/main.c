#include <stdio.h>
#include <stdlib.h>

double *foo() {
    return malloc(sizeof(double));
}

int main(){
    double * x = foo();
    printf("%p\n", x);
    return 0;
}
