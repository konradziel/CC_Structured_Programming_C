#include <stdio.h>
#include <stdlib.h>

double *foo(unsigned int n, double tab[]){
    double *tabCopy = (double*)malloc(n*sizeof(double));
    if(tabCopy == NULL){
        return NULL;
    }
    int i;
    for(i=0; i<n; i++){
        tabCopy[i] = tab[i];
    }
    return tabCopy;
}

void printtab(unsigned int n, double tab[]){
    int i;
    for(i=0; i<n; i++){
        printf("[%d]=%lf", i, tab[i]);
    }
    printf("\n");
}

int main()
{
    int i, n = 5;
    double *tab = malloc(n*sizeof(double));
    for(i=0; i<n; i++){
        *(tab+i) = (i+1)*2.5;
    }
    printtab(n, tab);
    double *tab2 = foo(n, tab);
    printtab(n, tab2);
    tab[1] = 10.5;
    printtab(n, tab);
    printtab(n, tab2);
    return 0;
}
