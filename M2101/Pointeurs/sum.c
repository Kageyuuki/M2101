#include <stdio.h>

void sum1 (double *tab, int size) {
	int i =0;
	double sum = 0;
	for (i = 0; i < size; i++) {
		sum = sum+tab[i];
	}
	return sum;
}

void sum2 (double *tab, int size) {
	double sum = 0;
	double *fin = tab+size;
	for (double *p = tab; p < fin; ++p) {
		sum = sum+*p;
	}
	return sum;
}

int main () {
	double tab[5];
	tab[0] = 100;
	tab[1] = 10;
	tab[2] = 1;
	tab[3] = 0.1;
	tab[4] = 0.01;
	sum1(tab, 5);
	printf("%d", sum /n);
	sum2(tab, 5);
	printf("%d", sum /n);
}
