#include <stdio.h>
#include <stdlib.h>

int * foo(int * a, int *b)
{
    if (*a < *b)
        return a;
    return b;
}

int main()
{
    int x = 5, y =10;
    printf("adres x %p\n", &x);
    printf("adres y %p\n", &y);
    printf("%p\n", foo(&x,&y));
    return 0;
}
