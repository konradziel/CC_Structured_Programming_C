#include <stdio.h>
#include <stdlib.h>

int absolute_value(int n);

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("Absolute value of %d is %d.", n, absolute_value(n));
    return 0;
}

int absolute_value(int n){
    if (n < 0){
        return n * (-1);
    }
    else{
        return n;
    }
}
