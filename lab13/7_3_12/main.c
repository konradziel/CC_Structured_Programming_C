#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element *next;
} Element;

void dodaj(Element *Lista, int a){
    Element *wsk = malloc(sizeof(Element));
    wsk->i = a;
    wsk->next = Lista->next;
    Lista->next = wsk;
}

void wyswietl(Element *Lista){
    if(Lista->next == NULL){
        printf("Lista jest pusta\n---\n");
        return;
    }
    Element *wsk = Lista->next;
    while(wsk != NULL){
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    Element *Lista = malloc(sizeof(Element));
    Lista->next = NULL;

    dodaj(Lista, 3);
    dodaj(Lista, 7);
    dodaj(Lista, 1);

    wyswietl(Lista);

    return 0;
}
