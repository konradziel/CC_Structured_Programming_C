#include <stdio.h>
#include <stdlib.h>

double foo(double (*foo2)(int value), int a){
    return foo2(a);
}

double help_function(int value){
    return (double)(value+10);
}

int main(){
    printf("%lf\n", foo(help_function, 5));
    return 0;
}

