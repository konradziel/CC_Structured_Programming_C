#include <stdio.h>
#include <stdlib.h>

int *foo() {
    return malloc(sizeof(int));
}

int main(){
    int * x = foo();
    printf("%p\n", x);
    return 0;
}

