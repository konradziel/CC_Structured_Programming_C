#include <stdio.h>
#include <stdlib.h>

void copy(const char* string, char* tab);
void copyWchar(const wchar_t* string, wchar_t* tab);

int main()
{
    const char string[] = "Sample string";
    char tab[50];

    copy(string, tab);

    printf("Original string: %s\n", string);
    printf("Copied string: %s\n", tab);


    const wchar_t stringW[] = L"Sample string";
    wchar_t tabW[50];

    copyWchar(stringW, tabW);

    wprintf(L"Original string: %ls\n", stringW);
    wprintf(L"Copied string: %ls\n", tabW);
    return 0;
}

void copy(const char* string, char* tab){
    int i = 0;
    while (string[i] != '\0') {
        tab[i] = string[i];
        i++;
    }
    tab[i] = '\0';
}

void copyWchar(const wchar_t* string, wchar_t* tab){
    int i = 0;
    while (string[i] != L'\0'){
        tab[i] = string[i];
        i++;
    }
    tab[i] = L'\0';
}
