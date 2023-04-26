#include <stdio.h>
#include <stdlib.h>

void foo(unsigned int n, unsigned int m, int tab1[n][m], int tab2[n][m]){
    int i, j;
    int tempTab[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            tempTab[i][j] = tab2[i][j];
            tab2[i][j] = tab1[i][j];
            tab1[i][j] = tempTab[i][j];
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
    int tab1[4][3] = {{1,2,4},{-2,3,5},{3,4,2},{2,7,-3}};
    int tab2[4][3] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
    printf("First tab:\n");
    print(4, 3, tab1);
    printf("Second tab:\n");
    print(4, 3, tab2);

    foo(4, 3, tab1, tab2);
    printf("Tabs after swap:\n");
    printf("First:\n");
    print(4, 3, tab1);
    printf("Second:\n");
    print(4, 3, tab2);
    return 0;
}
