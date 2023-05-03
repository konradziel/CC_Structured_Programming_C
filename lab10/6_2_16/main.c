#include <stdio.h>
#include <stdlib.h>

int maxAvgRow(int **tab, unsigned int n, unsigned int m){
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
    int *wsk[4] = {tab[0], tab[1], tab[2], tab[3]};
    int result = maxAvgRow(wsk, 4, 3);
    printf("Row with highest avg is %d\n", result);
    return 0;
}
