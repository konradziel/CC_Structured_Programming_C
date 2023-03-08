#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);
    printf("%d consecutive multiples of %d:\n", m, n);
    for(i = 1; i<=m; i++){
        printf("%d\n", i*n);
    }
}
