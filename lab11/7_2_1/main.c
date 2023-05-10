#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float a;
    float b;
    float c;
} trojkat;

float obwodPointer(trojkat *x){
    return (x->a + x->b + x->c);
}

float obwod(trojkat x){
    return (x.a + x.b + x.c);
}

int main()
{
    trojkat *myTriangle = (trojkat *)malloc(sizeof(trojkat));
    myTriangle->a = 5.4;
    myTriangle->b = 10.2;
    myTriangle->c = 11.4;
    printf("Obwod rowny %f\n", obwodPointer(myTriangle));
    free(myTriangle);

    trojkat myTriangleV2 = {5.4, 10.2, 11.4};
    printf("Obwod rowny %f\n", obwod(myTriangleV2));
    return 0;
}
