#include <stdio.h>
#include <stdlib.h>

void foo ( int n, int* w )
{
	*w = n;
}

int main()
{
	int x;
    foo( 5, &x );
	printf("%i\n", x);
	return 0;
}
