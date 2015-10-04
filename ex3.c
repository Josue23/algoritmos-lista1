#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 3
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/* faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.*/

// n1 é o número 1
// n2 é o número 2
int main()
{
	float n1, n2; // declara as variáveis n1 e n2

    printf("\nRecebe dois números, calcula e mostra a divisão do primeiro número pelo segundo.\n");
    printf("\nDigite o primeiro número: ");
	scanf("%f", &n1); // guarda o valor em n1

		
	printf("Digite o segundo número: ");
	scanf("%f", &n2); // declara o valor em n2
	
	// calcula e exibe o resultado
	if (n2 != 0)
	{
		printf("\n%.2f / %.2f = %.2f \n\n", n1, n2, n1 / n2);
	}
	else
	{
		printf("\nNenhum número pode ser dividido por zero.\n\n");
	}

	return 0;
}

