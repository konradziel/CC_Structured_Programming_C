#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool foo(int(*wsk1)(int), int(*wsk2)(int), int n){
    int i;
    for(i=0; i <= n; i++){
        if(wsk1(i) != wsk2(i)){
            return false;
        }
    }
    return true;
}

int help_function1(int a){
    return a;
}

int help_function2(int a){
    return a;
}

int main()
{
    printf("%d\n", foo(help_function1, help_function2, 5));
    return 0;
}
