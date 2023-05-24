#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element *next;
} Element;

int suma(Element *Lista){
    int sum = 0;
    while(Lista->next != NULL){
        Lista = Lista->next;
        sum += Lista->i;
    }
    return sum;
}

void wyswietlLZG(Element *Lista){
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
    Lista->next = malloc(sizeof(Element));
    Lista->next->i = -2;
    Lista->next->next = malloc(sizeof(Element));
    Lista->next->next->i = 8;
    Lista->next->next->next = malloc(sizeof(Element));
    Lista->next->next->next->i = 7;
    Lista->next->next->next->next = NULL;
    wyswietlLZG(Lista);
    printf("Suma elementow listy jest rowna %d.\n", suma(Lista));

    return 0;
}
