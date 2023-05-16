#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char marka[20];
    int przebieg;
} Samochod;

Samochod initSamochod(const char *marka, int przebieg){
    Samochod samochod;
    int i;
    for(i=0; i<=sizeof(marka); i++){
        if(i==sizeof(marka)){
            samochod.marka[i] = '\0';
        }
        else{
            samochod.marka[i] = marka[i];
        }
    }

    samochod.przebieg = przebieg;
    return samochod;

}

void pokazSamochod(Samochod samochod){
    printf("Marka: %s\n", samochod.marka);
    printf("Przebieg: %d\n", samochod.przebieg);
}

void przebiegService(Samochod *samochod){
    samochod->przebieg += 10000;
}

int main() {
    Samochod mojSamochod = initSamochod("Toyota", 231000);
    pokazSamochod(mojSamochod);
    printf("\nPo serwisie:\n");
    przebiegService(&mojSamochod);
    pokazSamochod(mojSamochod);

    return 0;
}
