#include <stdio.h>
#include <stdlib.h>

void foo(unsigned int n, int *tab1, int *tab2, int *tab3){
    int i;
    for(i=0; i<n; i++){
        if(*(tab1+i)>*(tab2+i)){
            *(tab3+i) = *(tab1+i);
        }
        else{
            *(tab3+i) = *(tab2+i);
        }
    }
}

void printtab(int n, int * tab){
    for(int i=0; i<n; i++){
        printf("[%d]=%d", i, *(tab+i));
    }
    printf("\n");
}

int main()
{
    unsigned int n = 4;
    int i;
    int *tab1 = malloc(n*sizeof(int));
    int *tab2 = malloc(n*sizeof(int));
    int *tab3 = malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        *(tab1+i) = (i+1);
    }
    for(i=0; i<n; i++){
        *(tab2+i) = 2*i;
    }
    for(i=0; i<n; i++){
        *(tab3+i) = (i+2);
    }
    printtab(n, tab1);
    printtab(n, tab2);
    printtab(n, tab3);
    foo(n, tab1, tab2,tab3);
    printtab(n, tab3);
    return 0;
}
