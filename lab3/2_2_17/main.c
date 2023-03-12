#include <stdio.h>
#include <stdlib.h>

void count(){
    static int number = 0;
    number++;
    printf("Function was called %d times\n", number);
}

int main(){
    int i;
    for(i = 0; i <= 10; i++){
        count();
    }
}
