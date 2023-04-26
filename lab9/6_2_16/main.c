#include <stdio.h>
#include <stdlib.h>

int maxAvgRow(unsigned int n, unsigned int m, int tab[n][m]){
    int i, j, max, sum=0;
    double avg;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum += tab[i][j];
        }
        if(((double)sum/m>avg) || (i==0)){
            max = i;
            avg = (double)sum/m;
        }
    }
    return max;
}

int main()
{
    int tab[4][3] = {{1,2,4},{-2,3,5},{3,4,2},{2,7,-3}};
    printf("Row with highest avg is %d\n", maxAvgRow(4, 3, tab));
    return 0;
}
