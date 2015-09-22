#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 2
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
// faça um programa que receba três números, calcule e mostre a multiplicação desses números.

// n1 é o número 1
// n2 é o número 2
// n3 é o número 3
float n1, n2, n3; // declara as variáveis n1, n2 e n3
int main()
{
    printf("\nRecebe três números, calcula e mostra a multiplicação desses números.\n");
    printf("\nDigite o primeiro número: ");
	scanf("%f", &n1); // guarda o valor em n1

		
	printf("Digite o segundo número: ");
	scanf("%f", &n2); // guarda o valore em n2
	
	printf("Digite o terceiro número: ");
	scanf("%f", &n3); // guarda o valore em n3
	
	// calcula e exibe
	printf("\n%.2f x %.2f x %.2f = %.2f \n\n", n1, n2, n3, n1 * n2 * n3);

	return 0;
}

