#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=2, result=2;
    printf("Enter the number which is greater than 2: ");
    scanf("%d", &n);
    if (n > 2){
        if(n%2==0){
            while(i<=(n-2)){
               result*=(i+2);
               i += 2;
            }
        }
        else{
            while(i<=(n-3)){
               result*=(i+2);
               i += 2;
            }
        }
        printf("Product: %d", result);
    }
    else{
        printf("Number isn't greater than 2.");
    }
    return 0;
}
