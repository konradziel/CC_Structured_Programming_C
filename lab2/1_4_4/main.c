#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, factorial = 1;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=2; i<=n; i++){
        factorial *= i;
    }
    printf("Factorial of %d is %d", n, factorial);
}
