#include <stdio.h>
#include <stdlib.h>

typedef union{
    int i;
    double d;
} Liczba;

typedef struct{
    int tp;
    Liczba zaw;
} Dane;

Dane load(){
    Dane dane;
    printf("If you want to give integer enter 0\n");
    printf("If you want to give rational number enter 1\n");
    scanf("%d", &dane.tp);
    if(dane.tp==0){
        printf("Enter integer ");
        scanf("%d", &dane.zaw.i);
    }
    else{
        printf("Enter rational number ");
        scanf("%lf", &dane.zaw.d);
    }
    return dane;
}

int main()
{
    load();
    return 0;
}
