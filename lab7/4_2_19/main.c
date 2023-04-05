#include <stdio.h>
#include <stdlib.h>

int *foo(unsigned int n, int tab1[]){
    int i, j, counter=0;
    for(i=0; i<n; i++){
        if(tab1[i] != 0){
            counter++;
        }
    }
    int *tab2 = (int*)malloc(counter * sizeof(int));
    if (tab2 == NULL) {
        printf("Failed to allocate memory for tab2\n");
        return NULL;
    }
    j=0;
    for(i=0; i<n; i++){
        if(tab1[i] != 0){
            tab2[j++] = tab1[i];
        }
        if(j == counter){
            break;
        }
    }
    return tab2;
}

int main()
{
    unsigned int n = 5;
    int i;
    int *tab = malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        *(tab+i) = i*6;
    }
    printf("%p\n", foo(n, tab));
    return 0;
}
