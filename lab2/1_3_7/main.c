#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    float delta, x1, x2;
    printf("Enter coefficients of the quadratic equation in the order a, b, c:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a == 0){
        printf("It's not a quadratic equation.");
    }
    else{
        delta = pow(b,2)-(4*a*c);
        if (delta < 0){
            printf("0 solutions");
        }
        else if (delta == 0){
            x1 = -b/(2*a);
            printf("1 solution: %f", x1);
        }
        else if (delta > 0){
            x1 = (-b + sqrtf(delta))/(2*a);
            x2 = (-b - sqrtf(delta))/(2*a);
            printf("2 solutions: %f and %f", x1, x2);
        }
    }
    return 0;
}
