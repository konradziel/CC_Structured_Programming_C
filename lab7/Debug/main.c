#include <stdio.h>
#include <stdlib.h>

void foo(int* tab, int n)
{
    for(int i=0;i<n-2;i++)
    {
        *(tab+i)+=4;
    }
}

int main()
{
    int tab[] = {3,4,1,-2,-3,4,2,0,5,2,9,8};
    int *wsk=tab;
    foo(wsk,5);
    int b = *(wsk+=4); //b=-3
    int c = b+2; // b=-3  , c=-1
    int d = b+c; // b=-3  , c=-1  , d=-4
    int e = (wsk+=-1)[2]; // b=-3  , c=-1  , d=-4  , e=-4
    e = (d -= 3) * (c += 3); // b=-3  , c=2  , d=-7  , e=-14
    c = d - (b+=2); // b=-1  , c=-6  , d=-7  , e=-14
    b = *wsk + e; // b=-16  , c=-6  , d=-7  , e=-14
    e = (++d)+(b--); // b=-17  , c=-6  , d=-6  , e=-22
    return 0;
}
