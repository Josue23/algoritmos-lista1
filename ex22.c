#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 22
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de diagonais desse polígono, onde N é o número de lados do polígono.
 * Sabe-se que ND = N(N -3) /2 */

int main()
{
	int N, ND;

    printf("\nRecebe o número de lados de um polígono convexo, calcula e mostra o número de diagonais desse polígono. \n");
    
	printf("\nNº de lados: ");
	scanf("%d", &N);

	ND = N * (N - 3)/2;

	printf("\nNº de diagonais: %d\n\n", ND);

	return 0;
}
