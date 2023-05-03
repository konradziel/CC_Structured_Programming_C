#include <stdio.h>
#include <stdlib.h>

void foo(int **tab1, int **tab2, unsigned int n, unsigned int m){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            tab2[i][j] = tab1[i][j];
        }
    }
}

void print(int **tab, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("[%d, %d]=%d\n", i, j, tab[i][j]);
        }
    }
}

int main()
{
    int tab1[4][3]={{1,2,4},{-2,3,5},{3,4,2},{2,7,-3}};
    int tab2[4][3]={{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
    int *wsk1[4] = {tab1[0], tab1[1], tab1[2], tab1[3]};
    int *wsk2[4] = {tab2[0], tab2[1], tab2[2], tab2[3]};
    printf("First tab:\n");
    print(wsk1, 4, 3);
    printf("Second tab, copy of first:\n");
    foo(wsk1, wsk2, 4, 3);
    print(wsk2, 4, 3);
    return 0;
}
