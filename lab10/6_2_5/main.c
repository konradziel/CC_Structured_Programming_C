#include <stdio.h>
#include <stdlib.h>

int*** foo(unsigned int n, unsigned int m, unsigned int o){
    int*** tab = malloc(n*sizeof(int**));
    for(int i=0; i<n; i++){
        tab[i] = malloc(m*sizeof(int*));
        for(int j=0; j<m; j++){
            tab[i][j] = malloc(o*sizeof(int));
        }
    }
    return tab;
}

void clear(int*** tab, unsigned int n, unsigned int m, unsigned int o){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            free(tab[i][j]);
        }
        free(tab[i]);
    }
    free(tab);
}

int main()
{
    unsigned int n=5, m=10, o=3;
    int*** tab = foo(n, m, o);
    printf("%p\n", tab);
    clear(tab, n, m, o);
    return 0;
}
