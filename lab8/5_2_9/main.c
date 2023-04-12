#include <stdio.h>
#include <stdlib.h>

void cutOut(char *text, int n, int m);

int main()
{
    char text[]="Hello world!";
    int n=3, m=8;
    cutOut(text, n, m);
    printf("%s\n", text);
    return 0;
}

void cutOut(char *text, int n, int m){
    int i, length;
    for(length=0; text[length]!=0; length++);
    if(length+1 > m){
        for(i=0; i+m<length; i++)
            text[n+i]=text[i+m+1];
    }
    else
        if((n<length)&&(length+1<=m))
            text[n]=0;
}
