#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element *next;
} Element;

Element *znajdzp(Element *Lista, int a){
    while((Lista->next != NULL)&&(Lista->next->i != a))
        Lista = Lista->next;
    return Lista;
}

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

int main(){
    Element* Lista = malloc(sizeof(Element));
    Lista->next = NULL;

    dodaj(Lista, 3);
    dodaj(Lista, 7);
    dodaj(Lista, 1);

    printf("Lista: \n");
    wyswietl(Lista);

    int szukana_wartosc = 7;
    Element *znaleziony_element = znajdzp(Lista, szukana_wartosc);
    if(znaleziony_element->next != NULL){
        printf("Element o wartosci %d zostal znaleziony.\n", szukana_wartosc);
    }else{
        printf("Element o wartosci %d nie zostal znaleziony.\n", szukana_wartosc);
    }

    return 0;
}
