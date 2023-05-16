#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char model[30];
    float cena;
} Laptop;

Laptop initLaptop(const char *model, float cena){
    Laptop laptop;
    int i;
    for(i=0; i<=sizeof(model); i++){
        if(i==sizeof(model)){
            laptop.model[i] = '\0';
        }
        else{
            laptop.model[i] = model[i];
        }
    }

    laptop.cena = cena;
    return laptop;
}

void pokazLaptop(Laptop laptop){
    printf("Model: %s\n", laptop.model);
    printf("Cena: %f\n", laptop.cena);
}

void zmniejszCene(Laptop *laptop){
    laptop->cena = 0.95*laptop->cena;
}

int main()
{
    Laptop mojLaptop = initLaptop("Lenovo", 4500);
    pokazLaptop(mojLaptop);
    printf("\nLaptop po zmniejszeniu ceny:\n");
    zmniejszCene(&mojLaptop);
    pokazLaptop(mojLaptop);
    return 0;
}
