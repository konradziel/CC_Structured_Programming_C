#include <stdio.h>
#include <stdlib.h>

int exercise(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else if(n%2 == 0){
        return exercise(n-1) + n;
    }
    else{
        return exercise(n-1) * n;
    }
}

int main()
{
    printf("%d", exercise(6));
}

