#include <stdio.h>
#include <stdlib.h>

void glue(char tab1[], char tab2[], char tab3[]);
int dlugoscChar(char *napis);

void glueWchar(wchar_t tab1[], wchar_t tab2[], wchar_t tab3[]);
int dlugoscWchar(wchar_t *napis);

int main()
{
    //char
    char tab1[]="Ala m";
    char tab2[]="a kota";
    char tab3[(dlugoscChar(tab1)+dlugoscChar(tab2))];
    glue(tab1, tab2, tab3);
    printf("%s\n", tab3);

    //wchar_t
    wchar_t wtab1[]=L"Ala m";
    wchar_t wtab2[]=L"a kota";
    wchar_t wtab3[(dlugoscWchar(wtab1)+dlugoscWchar(wtab2))];
    glueWchar(wtab1, wtab2, wtab3);
    wprintf(L"%s\n", wtab3);
    return 0;
}

void glue(char tab1[], char tab2[], char tab3[]){
    int i=0, j=0;
    while(tab1[i]!=0){
        tab3[i]=tab1[i];
        i++;
    }
    while(tab2[j]!=0){
        tab3[i]=tab2[j];
        j++;
        i++;
    }
    tab3[i]=0;
}

int dlugoscChar(char *napis){
    int counter=0;
    while(napis[counter]!=0){
        counter++;
    }
    return counter;
}

void glueWchar(wchar_t tab1[], wchar_t tab2[], wchar_t tab3[]){
    int i=0, j=0;
    while(tab1[i]!=0){
        tab3[i]=tab1[i];
        i++;
    }
    while(tab2[j]!=0){
        tab3[i]=tab2[j];
        j++;
        i++;
    }
    tab3[i]=0;
}

int dlugoscWchar(wchar_t *napis){
    int counter=0;
    while(napis[counter]!=0){
        counter++;
    }
    return counter;
}
