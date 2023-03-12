#include <stdio.h>
#include <stdlib.h>

int exercise(int n, int m){
    if(m == 0){
        return n;
    }
    else if(n >= m){
        return n - m + exercise(n-1, m) + exercise(n, m-1);
    }
    else{
        return exercise(m, n);
    }
}

int main()
{
    printf("%d", exercise(7, 5));
}

