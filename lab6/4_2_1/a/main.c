#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[]){
    for(int i=0; i<n; i++){
        tab[i] = 0;
    }
}

void printtab(int n, int tab[]){
    for(int i=0; i<n; i++){
        printf("[%d]=%d\n", i, tab[i]);
    }
}

int main()
{
    int tab[] = {3,4,5};
    int tab2[] = {-3,2,3,9,11};
    foo(3, tab);
    printtab(3, tab);
    foo(5, tab2);
    printtab(5, tab2);
    return 0;
}
