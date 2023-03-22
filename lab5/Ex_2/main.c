#include <stdio.h>
#include <stdlib.h>

int foo(int(*wsk1)(int), int(*wsk2)(int), int n){
    return wsk1(n)+wsk2(n);
}

int help_function1(int a){
    return a+4;
}

int help_function2(int a){
    return a-6;
}

int main()
{
    printf("%d\n", foo(help_function1, help_function2, 5));
    printf("%d\n", foo(help_function1, help_function2, -4));
    return 0;
}
