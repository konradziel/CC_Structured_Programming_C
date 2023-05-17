#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element *next;
} Element;

Element *dodaj(Element *Lista, int a) {
    Element *wsk = malloc(sizeof(Element));
    wsk->i = a;
    wsk->next = Lista;
    return wsk;
}

int main() {
    Element *Lista = NULL;

    Lista = dodaj(Lista, 1);
    Lista = dodaj(Lista, 2);
    Lista = dodaj(Lista, 3);

    Element *wsk = Lista;
    while(wsk != NULL){
        printf("%d ", wsk->i);
        wsk = wsk->next;
    }
    printf("\n");

    wsk = Lista;
    while (wsk != NULL) {
        Element *temp = wsk;
        wsk = wsk->next;
        free(temp);
    }

    return 0;
}
