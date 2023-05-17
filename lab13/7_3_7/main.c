#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element *next;
} Element;

Element *usun(Element *Lista, int a){
    Element *wsk, *wsk2;
    if(Lista == NULL){
        return NULL;
    }
    wsk = Lista;
    if(Lista->i == a){
        Lista = Lista->next;
        free(wsk);
    }
    else{
        while((wsk->next != NULL) && (wsk->next->i != a)){
            wsk = wsk->next;
        }
        if(wsk->next !=NULL){
            wsk2 = wsk->next;
            wsk->next = wsk2->next;
            free(wsk2);
        }
    }
    return Lista;
}

int main()
{
    Element *lista = malloc(sizeof(Element));
    lista->i = 5;
    lista->next = malloc(sizeof(Element));
    lista->next->i = 2;
    lista->next->next = malloc(sizeof(Element));
    lista->next->next->i = -4;
    lista->next->next->next = NULL;

    Element *wsk = lista;

    while(wsk != NULL){
        printf("%d ", wsk->i);
        wsk = wsk->next;
    }
    printf("\n");

    lista = usun(lista, 2);

    wsk = lista;
    while (wsk != NULL){
        printf("%d ", wsk->i);
        wsk = wsk->next;
    }
    printf("\n");

    wsk = lista;
    while(wsk != NULL){
        Element* temp = wsk;
        wsk = wsk->next;
        free(temp);
    }

    return 0;
}
