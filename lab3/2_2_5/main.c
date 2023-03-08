#include <stdio.h>
#include <stdlib.h>

int exercise(int n);

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("Two to power of %d is %d.", n, exercise(n));
    return 0;
}

int exercise(int n){
    int power = 2;
    int i;
    for(i = 1; i < n; i++){
        power *= 2;
    }
    return power;
}
