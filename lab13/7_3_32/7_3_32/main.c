#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element *next;
} Element;

Element *polacz(Element *Lista1, Element *Lista2){
    Element *temp1, *temp2;
    if(Lista1 == NULL)
        return NULL;

    temp1=temp2=Lista1;
    Lista1 = Lista1->next;
    temp2->next = Lista2;
    temp2 = Lista2;
    Lista2 = Lista2->next;
    while(Lista1 != NULL){
        temp2->next = Lista1;
        temp2 = Lista1;
        Lista1 = Lista1->next;
        temp2->next = Lista2;
        temp2 = Lista2;
        Lista2 = Lista2->next;
    }
    return temp1;
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
    Element *Lista1 = malloc(sizeof(Element));
    Lista1->i = -2;
    Lista1->next = malloc(sizeof(Element));
    Lista1->next->i = 8;
    Lista1->next->next = malloc(sizeof(Element));
    Lista1->next->next->i = 7;
    Lista1->next->next->next = NULL;

    Element *Lista2 = malloc(sizeof(Element));
    Lista2->i = -3;
    Lista2->next = malloc(sizeof(Element));
    Lista2->next->i = 4;
    Lista2->next->next = malloc(sizeof(Element));
    Lista2->next->next->i = 5;
    Lista2->next->next->next = NULL;

    wyswietlLBG(Lista1);
    wyswietlLBG(Lista2);

    Element *F_List = polacz(Lista1, Lista2);
    wyswietlLBG(F_List);

    return 0;
}
