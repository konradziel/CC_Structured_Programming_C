#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element *next;
} Element;

int maxRoz(Element *Lista){
    Element *temp;
    int max = abs(Lista->i - Lista->next->i);
    for(; Lista->next!=NULL; Lista=Lista->next){
        for(temp=Lista->next; temp!=NULL; temp=temp->next){
            if(abs(temp->i - Lista->i)>max){
                max = abs(temp->i - Lista->i);
            }
        }
    }
    return max;
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
    printf("%d", maxRoz(Lista));

    return 0;
}
