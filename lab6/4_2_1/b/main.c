#include <stdio.h>
#include <stdlib.h>

void foo(int n, int * tab){
    for(int i=0; i<n; i++){
        *(tab+i) = i;
    }
}

void printtab(int n, int * tab){
    for(int i=0; i<n; i++){
        printf("[%d]=%d\n", i, *(tab+i));
    }
}

int main()
{
    int *tab = malloc(3*sizeof(int));
    *tab = 3;
    *(tab+1) = 6;
    *(tab+2) = 9;
    printtab(3, tab);
    foo(3, tab);
    printtab(3, tab);
    return 0;
}
