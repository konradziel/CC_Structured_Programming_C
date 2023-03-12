#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wouta(unsigned int n);
void woutb(unsigned int n);

int main()
{
    int n = -1;
    while(n < 0){
        printf("Enter the number:\n");
        scanf("%d", &n);
        if(n < 0){
            printf("Number can't be negative.\n");
        }
    }
    printf("Case A\n");
    wouta(n);
    printf("Case B\n");
    woutb(n);
    return 0;
}

void wouta(unsigned int n){
    int i, j;
    for(i = 1; i <= sqrt(n); i++){
        j=sqrt(n-(i*i));
        if((j != 0) && ((i*i)+(j*j) == n)){
            printf("%d*%d+%d*%d=%d\n", i, i, j, j, n);
        }
    }
}

void woutb(unsigned int n){
    int i, j;
    for(i = 1; i <= sqrt(n); i++){
        j=sqrt(n-(i*i));
        if((i <= j) && ((i*i)+(j*j) == n)){
            printf("%d*%d+%d*%d=%d\n", i, i, j, j, n);
        }
    }
}

