#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float a;
    float b;
    float c;
} trojkat;

void rewrite(trojkat troj1, trojkat *troj2){
    *troj2 = troj1;
}

void wypisz(trojkat *troj){
    printf("Trojkat o bokach: (%.1f, %.1f, %.1f)\n", troj->a, troj->b, troj->c);
}

int main()
{
    trojkat Triangle1 = {5.4, 10.2, 11.4};
    trojkat *Triangle2 = (trojkat *)malloc(sizeof(trojkat));
    Triangle2->a = 2.4;
    Triangle2->b = 7.6;
    Triangle2->c = 11;
    printf("Trojkat 2:\n");
    wypisz(Triangle2);
    rewrite(Triangle1, Triangle2);
    printf("Trojkat 2 po przepisaniu do niego trojkata 1:\n");
    wypisz(Triangle2);
    free(Triangle2);
    return 0;
}
