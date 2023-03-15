#include <stdio.h>
#include <stdlib.h>

int smallernumber(int *x, int *y){
    if(*x < *y){
        return *x;
    }
    return *y;
}
int main()
{
    int x = 5, y = 10;
    printf("Smaller number is %d", smallernumber(&x, &y));
}
