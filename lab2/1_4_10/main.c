#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, sq=0;
    printf("Enter the number: ");
    scanf("%d", &x);
    for(i=1; i<=x; i++){
        if(i*i <=x){
            sq=i;
        }
    }
    printf("Integer part of square root of %d is %d", x, sq);
}
