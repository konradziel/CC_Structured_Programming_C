#include <stdio.h>
#include <stdlib.h>


void print(int n, int tab[]){
    for(int i=0; i<n; i++){
        printf("[%d]=%d\n", i, tab[i]);
    }
}

int foo(int n){
    int tab2[n];
    for(int i=0; i<n; i++){
        tab2[i]= 1;
    }
    tab2[0]=0;
    tab2[1]=0;
    for(int i=2; i<n; i++){
        if (tab2[i] == 1){
            for(int j=2; j*i<n; j++){
                tab2[j*i] = 0;
            }
        }
    }
    int indeks = 3;
    for(int k=indeks; k<n; k++){
        if (tab2[k] == 1){
            indeks = k;
        }
    }
    return indeks;
}


int main()
{
    unsigned int n = 10;
    printf("%d\n", foo(n));
    return 0;
}
