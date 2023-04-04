#include <stdio.h>
#include <stdlib.h>

void reverse(unsigned int n, int *tab){
    int i, helpTab;
    for(i=0; i<n/2; i++){
        helpTab = *(tab+i);
        *(tab+i) = *(tab+n-i-1);
        *(tab+n-i-1) = helpTab;
    }
}

void moveLeft(unsigned int n, int *tab){
    int i, helpTab=*(tab);
    for(i=0; i<n-1; i++){
        *(tab+i) = *(tab+i+1);
    }
    *(tab+n-1) = helpTab;
}

void moveRight(unsigned int n, int *tab){
    int i, helpTab=*(tab+n-1);
    for(i=n-2; i>=0; i--){
        *(tab+i+1) = *(tab+i);
    }
    *(tab) = helpTab;
}

int max(unsigned int n, int *tab){
    // Checking at what position is max element
    int i, max=0;
    for(i=1; i<n; i++){
        if(*(tab+i) > *(tab+max)){
            max = i;
        }
    }
    return max;
}

void sortAsc(unsigned int n, int *tab){
    int i, j, helpTab;
    for(i=0; i<n-1; i++){
        j = max(n-i, tab);
        helpTab = *(tab+n-i-1);
        *(tab+n-i-1) = *(tab+j);
        *(tab+j) = helpTab;
    }
}

void sortDesc(unsigned int n, int *tab){
    int i, j, k, helpTab;
    for(i=0; i<n-1; i++){
        j = i;
        for(k=i+1; k<n; k++){
            if(*(tab+k) > *(tab+j)){
                j = k;
            }
        }
        helpTab = *(tab+i);
        *(tab+i) = *(tab+j);
        *(tab+j) = helpTab;
    }
}


void printtab(unsigned int n, int *tab){
    int i;
    for(i=0; i<n; i++){
        printf("[%d]=%d", i, *(tab+i));
    }
    printf("\n");
}

int main()
{
    unsigned int n = 4;
    int i;
    int *tab = malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        *(tab+i) = (i+1);
    }
    printtab(n, tab);
    reverse(n, tab);
    printtab(n, tab);
    moveLeft(n, tab);
    printtab(n, tab);
    moveRight(n, tab);
    printtab(n, tab);
    sortAsc(n, tab);
    printtab(n, tab);
    sortDesc(n, tab);
    printtab(n, tab);
}
