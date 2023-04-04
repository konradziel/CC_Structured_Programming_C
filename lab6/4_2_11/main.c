#include <stdio.h>
#include <stdlib.h>

double foo(int n, double *tab1, double *tab2){
    double result = 0;
    int i;
    for(i=0; i<n; i++){
        result += (*(tab1+i)* *(tab2+i));
    }
    return result;
}

void printtab(int n, double *tab){
    int i;
    for(i=0; i<n; i++){
        printf("[%d]=%lf", i, *(tab+i));
    }
    printf("\n");
}

int main()
{
    unsigned int n = 4;
    int i;
    double *tab1 = malloc(n*sizeof(double));
    double *tab2 = malloc(n*sizeof(double));
    for(i=0; i<n; i++){
        *(tab1+i) = (i+1);
    }
    for(i=0; i<n; i++){
        *(tab2+i) = 2*i;
    }
    printtab(n, tab1);
    printtab(n, tab2);
    printf("dot product is %lf", foo(n, tab1, tab2));

}
