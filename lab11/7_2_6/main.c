#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int w;
    double *tab;
} punktn;

void rewrite(punktn *p1, punktn *p2, unsigned int n){
    int i, j;
    for(i=0; i<n; i++){
        p2[i].tab = malloc(p1[i].w*sizeof(double));
        p2[i].w = p1[i].w;
        for(j=0; j<p1[i].w; j++){
            p2[i].tab[j] = p1[i].tab[j];
        }
    }
}

void printPoints(punktn *p, unsigned int n){
    int i, j;
    printf("Points: \n");
    for(i=0; i<n; i++){
        printf("Point %d: ", i+1);
        for(j=0; j<p[i].w; j++){
            printf("%lf ", p[i].tab[j]);
        }
        printf("\n");
    }
}

int main()
{
    punktn p1[2] = {
        {3, (double[]){1, 2, 3}},
        {2, (double[]){4, 5}}
    };

    unsigned int n = sizeof(p1) / sizeof(p1[0]);

    punktn *p2 = malloc(n*sizeof(punktn));

    printf("Coordinates 1\n");
    printPoints(&p1, n);
    rewrite(&p1, p2, n);
    printf("\nCoordinates 2 after rewriting coordinates 1 to it\n");
    printPoints(p2, n);

    for(int i=0; i<n; i++) {
        free(p2[i].tab);
    }
    free(p2);

    return 0;
}
