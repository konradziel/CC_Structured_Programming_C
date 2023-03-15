#include <stdio.h>
#include <stdlib.h>

int foo(const int *x, const int *y){
    return *x + *y;
}

int main()
{
    int x = 10, y = 5;
    printf("Sum is: %d\n", foo(&x, &y));
    return 0;
}
