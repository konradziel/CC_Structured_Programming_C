#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a, b, c, d;
    printf("Enter four numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // part a
    int x = 0;
    while (abs(a) * x * x + b * x + c <= d) {
        x++;
    }
    printf("A)%d\n", x);

    // part b
    x = 0;
    while (5 * x * x + a * x + b < c) {
        x++;
    }
    if(x-1<0){
        printf("B)Such x doesn't exist.\n");
    }
    else{
        printf("B)%d\n", x - 1);
    }

    // part c
    x = 0;
    while (5 * x * x + a * x + b <= c) {
        x++;
    }
    if(x-1<0){
        printf("C)Such x doesn't exist.\n");
    }
    else{
        printf("C)%d\n", x - 1);
    }

    return 0;
}
