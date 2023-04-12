#include <stdio.h>
#include <stdlib.h>


void rewrite(char fromTab[], char toTab[]);
int dlugoscChar(char *napis);

void rewriteWchar(wchar_t fromTab[], wchar_t toTab[]);
int dlugoscWchar(wchar_t *napis);

int main()
{
    //char
    char tab1[]="Hello world!";
    int lengthTab1=dlugoscChar(tab1);
    char tab2[lengthTab1];
    rewrite(tab1, tab2);
    printf("%s\n", tab2);

    //wchar_t
    wchar_t wTab1[]=L"Hello world!";
    int lengthWTab1=dlugoscWchar(wTab1);
    wchar_t wTab2[lengthWTab1];
    rewriteWchar(wTab1, wTab2);
    wprintf(L"%s\n", wTab2);
    return 0;
}

//char
void rewrite(char fromTab[], char toTab[]) {
    int i = 0;
    while (fromTab[i]!=0) {
        toTab[i] = fromTab[i];
        i++;
    }
    toTab[i]=0;
}

int dlugoscChar(char *napis){
    int counter=0;
    while(napis[counter]!=0){
        counter++;
    }
    return counter;
}

//wchar_t
void rewriteWchar(wchar_t fromTab[], wchar_t toTab[]) {
    int i = 0;
    while (fromTab[i]!=0) {
        toTab[i] = fromTab[i];
        i++;
    }
    toTab[i]=0;
}

int dlugoscWchar(wchar_t *napis){
    int counter=0;
    while(napis[counter]!=0){
        counter++;
    }
    return counter;
}
