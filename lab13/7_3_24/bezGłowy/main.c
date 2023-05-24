#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element *next;
} Element;

int suma(Element *Lista){
    int sum = 0;
    while(Lista != NULL){
        sum += Lista->i;
        Lista = Lista->next;
    }
    return sum;
}

void wyswietlLBG(Element *Lista){
    if(Lista == NULL){
        printf("Lista jest pusta\n---\n");
        return;
    }
    Element *wsk = Lista;
    while(wsk != NULL){
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    Element *Lista = malloc(sizeof(Element));
    Lista->i = -2;
    Lista->next = malloc(sizeof(Element));
    Lista->next->i = 8;
    Lista->next->next = malloc(sizeof(Element));
    Lista->next->next->i = 7;
    Lista->next->next->next = NULL;
    wyswietlLBG(Lista);
    printf("Suma elementow listy jest rowna %d.\n", suma(Lista));

    return 0;
}
