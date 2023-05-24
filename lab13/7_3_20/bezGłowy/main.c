#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element *next;
} Element;

void zeruj(Element *Lista){
    while(Lista != NULL){
        Lista->i = 0;
        Lista = Lista->next;
    }
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
    zeruj(Lista);
    wyswietlLBG(Lista);

    return 0;
}
