#include <stdio.h>
#include <stdlib.h>

int** foo(unsigned int n, unsigned int m){
    int** tab = malloc(n*sizeof(int*));
    for(int i=0; i<n; i++){
        tab[i] = malloc(m*sizeof(int));
    }
    return tab;
}

int main()
{
    unsigned int n=5, m=10;
    printf("%p\n", foo(n, m));
    return 0;
}
