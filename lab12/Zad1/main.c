#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char tytul[50];
    int liczba_stron;
} Ksiazka;

Ksiazka *initKsiazka(const char *tytul, int liczba_stron){
    if(strlen(tytul)<5 || liczba_stron<=50){
        return NULL;
    }
    Ksiazka *ksiazka = (Ksiazka*)malloc(sizeof(Ksiazka));
    strncpy(ksiazka->tytul, tytul, sizeof(ksiazka->tytul)-1);
    ksiazka->tytul[sizeof(ksiazka->tytul) - 1] = '\0';
    ksiazka->liczba_stron = liczba_stron;
    return ksiazka;
}

void pokazKsiazka(Ksiazka ksiazka){
    printf("Tytul: %s\n", ksiazka.tytul);
    printf("Liczba stron: %d\n", ksiazka.liczba_stron);
}

void dodajStrony(Ksiazka *ksiazka){
    ksiazka->liczba_stron += 10;
}

int main()
{
    Ksiazka *mojaKsiazka = initKsiazka("The way of kings", 620);
    if (mojaKsiazka == NULL) {
        printf("Nie spelniono warunkow inicjalizacji ksiazki.\n");
        return 0;
    }
    pokazKsiazka(*mojaKsiazka);
    printf("\nKsiazka po dodaniu stron:\n");
    dodajStrony(mojaKsiazka);
    pokazKsiazka(*mojaKsiazka);

    free(mojaKsiazka);
    return 0;
}
