#include <stdio.h>
#include <stdlib.h>

void foo(int tab[][100], int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<100; j++){
            tab[i][j] = 0;
        }
    }
}

void print(int n, int m, int tab[][m]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("[%d, %d]=%d\n", i, j, tab[i][j]);
        }
    }
}

int main()
{
    int tab[4][100];
    foo(tab, 4);
    print(4, 100, tab);
    return 0;
}
