#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 1
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
// faça um programa que receba dois números, calcule e mostre a subtração do primeiro pelo segundo.

float n1, n2; // declara as variáveis n1 e n2
int main()
{
    printf("\nMostra a subtração do primeiro número pelo segundo.\n");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &n1); // guarda o valor na variável n1

		
	printf("Digite o segundo número: ");
	scanf("%f", &n2); // guarda o valor na variável n2
	
	// calcula e exibe a operação matemática para o usuário
	printf("\n%.2f - %.2f = %.2f \n\n", n1, n2, n1 - n2);

	return 0;
}
