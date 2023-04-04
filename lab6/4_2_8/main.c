#include <stdio.h>
#include <stdlib.h>

void fooa(unsigned int n, int *tab1, int *tab2, double *tab3){
    int i;
    for(i=0; i<n; i++){
        *(tab3+i) = *(tab1+i);
        *(tab3+n+i) = *(tab2+i);
    }
}

void foob(unsigned int n, int *tab1, int *tab2, double *tab3){
    int i, j;
    for(i=0, j=0; i<n; i++, j+=2){
        *(tab3+j+1) = *(tab1+i);
        *(tab3+j) = *(tab2+i);
    }
}

void printtab(int n, void * tab, char type){
    int i;
    if(type=='i'){
        int *t = (int*)tab;
        for(i=0; i<n; i++){
            printf("[%d]=%d", i, *(t+i));
        }
    }
    else if(type=='d'){
        double *t = (double*)tab;
        for(i=0; i<n; i++){
            printf("[%d]=%lf", i, *(t+i));
        }
    }
    printf("\n");
}

int main()
{
    unsigned int n = 4;
    int i;
    int *tab1 = malloc(n*sizeof(int));
    int *tab2 = malloc(n*sizeof(int));
    double *tab3 = malloc(2*n*sizeof(double));
    for(i=0; i<n; i++){
        *(tab1+i) = (i+1);
    }
    for(i=0; i<n; i++){
        *(tab2+i) = 2*i;
    }
    for(i=0; i<(2*n); i++){
        *(tab3+i) = (i+2);
    }
    printtab(n, tab1, 'i');
    printtab(n, tab2, 'i');
    printtab(2*n, tab3, 'd');
    fooa(n, tab1, tab2, tab3);
    printtab(2*n, tab3, 'd');
    foob(n, tab1, tab2, tab3);
    printtab(2*n, tab3, 'd');
    return 0;
}
