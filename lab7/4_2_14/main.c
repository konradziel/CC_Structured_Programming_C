#include <stdio.h>
#include <stdlib.h>

double* foo(unsigned int n){
    return (double*)malloc(n*sizeof(double));
}

int main(){
    unsigned int n = 5;
    printf("%p\n", foo(n));
    return 0;
}
