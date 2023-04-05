#include <stdio.h>
#include <stdlib.h>

void clearMemory(double * tab){
    free(tab);
}

int main()
{
    int n = 6;
    double *tab = (double*)malloc(n*sizeof(double));
    clearMemory(tab);
    return 0;
}
