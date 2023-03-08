#include <stdio.h>
#include <stdlib.h>

int floorSqrt(int n, int m);
int Sqrt(int base, int exponent);

int main(){
    int m = -1;
    int n = -1;
    while(m <= 1 || n < 0){
        printf("Enter the number:\n");
        scanf("%d %d", &m, &n);
        if(m <= 1 || n < 0){
            printf("First number must be greater than one and second can't be negative.\n");
        }
    }
    printf("the %d root of %d is %d.", m, n, floorSqrt(n, m));
    return 0;
}

int Sqrt(int base, int exponent){
    int result = 1;
    for(int i=1; i <= exponent; i++){
        result *= base;
    }
    return result;
}

int floorSqrt(int n, int m){
    int result = 0;
    for(int i = 0; i < n; i++){
        if(Sqrt(i, m) <= n){
            result = i;
        }
    }
    return result;
}

