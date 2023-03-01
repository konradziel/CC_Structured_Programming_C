#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=2;
    printf("Enter the number which is greater than 2: ");
    scanf("%d", &n);
    if (n > 2){
        if(n%2==0){
            while(i<=n){
               i*=(i+2);
            }
        }
        else{
            while(i<=(n-1)){
               i*=(i+2);
            }
        }
        printf("Product: %d", i);
    }
    else{
        printf("Number isn't greater than 2.");
    }
    return 0;
}
