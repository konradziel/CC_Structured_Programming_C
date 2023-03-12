#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(){
	int a, b, c, d;
	while (1){
        printf("Enter four numbers:\n");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a != 0){
			break;
        }
		printf("Enter numbers again!\n");
	}

    if (a<0){
        a*=-1;
    }
    if (c>d){
        printf("Part A: 0\n");
    }
    else{
        int i;
        for(i=0;a*i*i+b*i+c<=d;i++){
            ;
        }
        printf("Part A: %d\n",i);
    }

    int x=0;
    int max_x=0;
    if (b<c)
    {
        int result = 5*x*x+a*x+b;
        while(result <c)
        {
            max_x=x;
            x++;
            result = 5*x*x+a*x+b;
        }
    }
    else
    {
        int result = 5*x*x+a*x+b;
        while(result >=c)
        {
            max_x=x;
            x++;
            result = 5*x*x+a*x+b;
        }
        while(result <c)
        {
            max_x=x;
            x++;
            result = 5*x*x+a*x+b;
        }
    }
    printf("Part b: %d\n", max_x);

    int x1=0;
    int max_x1=0;
    if (b<c)
    {
        int result1 = 5*x1*x1+a*x1+b;
        while(result1 <=c)
        {
            max_x1=x1;
            x1++;
            result1 = 5*x1*x1+a*x1+b;
        }
    }
    else
    {
        int result1 = 5*x1*x1+a*x1+b;
        while(result1 >c)
        {
            max_x1=x1;
            x1++;
            result1 = 5*x1*x1+a*x1+b;
        }
        while(result1 <=c)
        {
            max_x1=x1;
            x1++;
            result1 = 5*x1*x1+a*x1+b;
        }
    }
    printf("Part c: %d\n", max_x1);
    return 0;
}
