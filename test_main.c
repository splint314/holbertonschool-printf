#include "main.h"
#include <stdio.h>

int main(void)
{
	_printf("Test %d\n", 42);
	_printf("Nombre négatif: %d\n", -15);
	_printf("Zéro: %d\n", 0);
	_printf("Grand nombre: %d\n", 1234567);
	_printf("Avec du texte: %d et %d\n", 10, 20);
	
	printf("\n--- Comparaison avec printf standard ---\n");
	printf("Test %d\n", 42);
	printf("Nombre négatif: %d\n", -15);
	printf("Zéro: %d\n", 0);
	printf("Grand nombre: %d\n", 1234567);
	printf("Avec du texte: %d et %d\n", 10, 20);
	
	return (0);
}
