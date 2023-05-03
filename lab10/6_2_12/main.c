#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int tab[][m]){
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
    printf("%d\n", foo(2, 3, tab));
    return 0;
}
