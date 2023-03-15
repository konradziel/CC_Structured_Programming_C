#include <stdio.h>
#include <stdlib.h>

void foo(int *x, int *y){
    if(*y < *x){
        int temp = *y;
        *y = *x;
        *x = temp;
    }
}

int main()
{
    int x = 5, y = 3;
    printf("%d %d", x, y);
    foo(&x, &y);
    printf("\n%d %d", x, y);
    int z = 10, f = 20;
    printf("\n%d %d", z, f);
    foo(&z, &f);
    printf("\n%d %d", z, f);
}
