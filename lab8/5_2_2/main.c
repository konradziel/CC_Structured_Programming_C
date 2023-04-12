#include <stdio.h>
#include <stdlib.h>

int dlugoscChar(char *napis){
    int counter=0;
    while(napis[counter]!=0){
        counter++;
    }
    return counter;
}

int dlugoscWchar(wchar_t *napis){
    int counter=0;
    while(napis[counter]!=0){
        counter++;
    }
    return counter;
}

int main()
{
    char *napis1="programowanie strukturalne";
    wchar_t *napis2=L"programowanie";
    printf("%d\n", dlugoscChar(napis1));
    printf("%d\n", dlugoscWchar(napis2));
    return 0;
}
