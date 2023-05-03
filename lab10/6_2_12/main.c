#include <stdio.h>
#include <stdlib.h>

int foo(int **tab, int n, int m){
    int i, j, sum=0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum += tab[i][j];
        }
    }
    return sum;
}

int main()
{
    int tab[2][3]={{1,2,4},{-2,3,5}};
    int *wsk[2] = {tab[0], tab[1]};
    int result = foo(wsk, 2, 3);
    printf("%d\n", result);
    return 0;
}
