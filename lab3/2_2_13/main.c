#include <stdio.h>
#include <stdlib.h>

void wouta(unsigned int n);
void woutb(unsigned int n);
int Sqrt(unsigned int x);

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
    for(i = 1; i <= Sqrt(n); i++){
        j=Sqrt(n-(i*i));
        if((j != 0) && ((i*i)+(j*j) == n)){
            printf("%d*%d+%d*%d=%d\n", i, i, j, j, n);
        }
    }
}

void woutb(unsigned int n){
    int i, j;
    for(i = 1; i <= Sqrt(n); i++){
        j=Sqrt(n-(i*i));
        if((i < j) && ((i*i)+(j*j) == n)){
            printf("%d*%d+%d*%d=%d\n", i, i, j, j, n);
        }
    }
}

int Sqrt(unsigned int x){
    int n1 = 0, n2 = x, avg;
    while(n2 - n1 > 1){
        avg=(n1 + n2)/2;
        if(avg*avg <= x){
            n1 = avg;
        }
        else{
            n2 = avg;
        }
    }
    if(x <= 1){
        return n2;
    }
    else{
        return n1;
    }
}
