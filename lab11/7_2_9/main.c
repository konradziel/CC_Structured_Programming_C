#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int i;
    struct list *wsk;
} list;

int main() {
    list node;
    node.i = 10;
    node.wsk = NULL;

    printf("Node field1: %d\n", node.i);
    return 0;
}
