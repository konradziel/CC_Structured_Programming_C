#include <stdio.h>
#include <stdlib.h>

int *foo(int n) {
    return malloc(n*sizeof(int));
}

int main(){
    int * x = foo(5);
    printf("%p\n", x);
    printf("%Iu\n", sizeof(x));
    return 0;
}

