/* Program wyswietlajacy wartosci pola powierzchni prostokata oraz
/* objetosci prostopadloscianu */
#include <stdio.h>
#include <stdlib.h>
#include "polelib.h"
#include "objlib.h"

int main(int argc, char *argv[]) {
	float n, m, h;
	
	if (argc == 4){
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		h = atoi(argv[3]);
		printf("Pole prostokata: %.2f\n", pole(n, m));
		printf("Objetosc prostopadloscianu: %.2f\n", objetosc(n, m, h));
		
	}
	else if (argc == 3){
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("Pole prostokata: %.2f\n", pole(n, m));
	}
	else {
		printf("Podano nieprawidlowa liczbe argumentow!\n");
		exit(-1);
	}
	/*printf("Pole prostokata: %.2f\n", pole(n, m));
	printf("Objetosc prostopadloscianu: %.2f\n", objetosc(n, m, h));*/
}
