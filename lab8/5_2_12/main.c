#include <stdio.h>
#include <stdlib.h>

void cutOutFromFirst(char *text1, char *text2);
void cutOutFromFirstWchar(wchar_t *text1, wchar_t *text2);

int main()
{
    char text[]="Hello world";
    char text2[]="Sold";
    cutOutFromFirst(text, text2);
    printf("%s\n", text);

    wchar_t textWc[]=L"Hello world";
    wchar_t text2Wc[]=L"Sold";
    cutOutFromFirstWchar(textWc, text2Wc);
    wprintf(L"%s\n", textWc);
    return 0;

}

void cutOutFromFirst(char *text1, char *text2){
    int i, j, k, length_1, length_2;
    for(length_1=0; text1[length_1]!=0; length_1++);
    for(length_2=0; text2[length_2]!=0; length_2++);
    for(i=0; i<length_1; i++){
        for(j=0; j<length_2; j++){
            if(text1[i]==text2[j]){
                for(k=0; k<length_1; k++){
                    text1[i+k]=text1[i+k+1];
                }
                i--;
                length_1--;
            }
        }
    }
}

void cutOutFromFirstWchar(wchar_t *text1, wchar_t *text2){
    int i, j, k, length_1, length_2;
    for(length_1=0; text1[length_1]!=0; length_1++);
    for(length_2=0; text2[length_2]!=0; length_2++);
    for(i=0; i<length_1; i++){
        for(j=0; j<length_2; j++){
            if(text1[i]==text2[j]){
                for(k=0; k<length_1; k++){
                    text1[i+k]=text1[i+k+1];
                }
                i--;
                length_1--;
            }
        }
    }
}
