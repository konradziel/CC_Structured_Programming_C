#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n){
    if(n==0 || n==1){
        return 1;
    }
    if (n%3==0){
        return foo(n/3);
    }
    if (n%3==1){
        return foo((n-1)/3)+1;
    }
    return foo(n-1)-1;
}

int main()
{
    int a=123;
    int b=1234;
    printf("%d\n", foo(a));
    printf("%d\n", foo(b));
    return 0;
}
