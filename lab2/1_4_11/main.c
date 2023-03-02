#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int zad_a(int a, int b, int c, int d){
	if (c > d){
		return 0;
	}

	for (int i = 1; i < INT_MAX; i++){
		if ((abs(a) * pow(i, 2) + b * pow(i, 2) + c) > d){
			return i;
		}
	}
}

int zad_b(int a, int b, int c){
	int prev = 0;
	bool wasPrev = false;
	for (int i = 1; i < INT_MAX; i++){
		if ((5 * pow(i, 2) + a * i + b) < c){
			prev = i;
			wasPrev = true;
		}
		else if (wasPrev){
			return prev;
		}
	}
}

int zad_c(int a, int b, int c){
	int prev = 0;
	bool wasPrev = false;
	for (int i = 1; i < INT_MAX; i++){
		if ((5 * pow(i, 2) + a * i + b) <= c){
			prev = i;
			wasPrev = true;
		}
		else if (wasPrev){
			return prev;
		}
	}
}

int main(){
	int a, b, c, d;
	while (1){
        printf("Enter four numbers:\n");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a != 0){
			break;
        }
		printf("Podaj liczby jeszcze raz!\n");
	}
	printf("A) %d\n", zad_a(a, b, c, d));
	printf("B) %d\n", zad_b(a, b, c));
	printf("C) %d\n", zad_c(a, b, c));
}
