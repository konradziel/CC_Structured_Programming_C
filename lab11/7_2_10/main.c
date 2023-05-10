#include <stdio.h>
#include <stdlib.h>

typedef union{
    int i;
    unsigned int u;
} super_int;

int main() {
    super_int value1;
    value1.i = -5;

    super_int value2;
    value2.u = 10;

    printf("Signed value: %d\n", value1.i);
    printf("Unsigned value: %u\n", value2.u);

    return 0;
}
