#include <stdio.h>
#include <stdlib.h>

int foo(const int *wsk1, int * const wsk2){
    return *wsk1-*wsk2;
}

int main()
{
    const int a=10;
    int b=5;
    printf("%d\n", foo(&a, &b));
    return 0;
}
