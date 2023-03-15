#include <stdio.h>
#include <stdlib.h>

void foo(const int *x, int * const y){
    *y = *x;
}

int main()
{
    int x=5, y=10;
    foo(&x, &y);
    printf("%d", y);
    return 0;
}
