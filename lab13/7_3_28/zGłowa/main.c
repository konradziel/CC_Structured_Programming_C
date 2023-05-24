#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element *next;
} Element;

int maxRoz(Element *Lista){
    Element *temp;
    int max = abs(Lista->next->i - Lista->next->next->i);
    for(Lista=Lista->next; Lista->next!=NULL; Lista=Lista->next){
        for(temp=Lista->next->next; temp!=NULL; temp=temp->next){
            if(abs(temp->i - Lista->i)>max){
                max = abs(temp->i - Lista->i);
            }
        }
    }
    return max;
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
    printf("%d", maxRoz(Lista));

    return 0;
}
