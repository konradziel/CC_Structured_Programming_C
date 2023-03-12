#include <stdio.h>
#include <stdlib.h>

int exercise(int n){
    if(n == 0){
        return 1;
    }
    else{
        return 2 * exercise(n-1) + 5;
    }
}


int main()
{
    printf("%d", exercise(3));
}
