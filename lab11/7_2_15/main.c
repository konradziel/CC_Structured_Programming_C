#include <stdio.h>
#include <stdlib.h>

typedef enum{
    Pies,
    Kot,
    Chomik,
    Jaszczurka,
    Rybka
} zwierzak;

int main(){
    zwierzak mojZwierzak = Kot;
    switch (mojZwierzak){
        case Pies:
            printf("Mam psa.\n");
            break;
        case Kot:
            printf("Mam kota.\n");
            break;
        case Chomik:
            printf("Mam chomika.\n");
            break;
        case Jaszczurka:
            printf("Mam kur�.\n");
            break;
        case Rybka:
            printf("Mam rybk�.\n");
            break;
    }
    return 0;
}
