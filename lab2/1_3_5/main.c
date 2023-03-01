#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int choice;
    double a, b, c, h, ta, p;
    printf("How you want to enter the dimensions of triangle:\n 1.Base and height\n 2.All sides\n");
    scanf("%d", &choice);
    if (choice == 1){
        printf("Enter base and height:");
        scanf("%lf %lf", &a, &h);
        ta = (a*h)/2;
    }
    else if (choice == 2){
        printf("Enter all sides:");
        scanf("%lf %lf %lf", &a ,&b ,&c);
        p = (a+b+c)/2;
        ta=sqrt(p*(p-a)*(p-b)*(p-c));
    }
    printf("Triangle area is %f", ta);
    return 0;
}
