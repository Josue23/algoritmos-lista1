#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 23
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180. */

int main()
{
	float angulo1, angulo2, angulo3;

    printf("\nRecebe a medida de dois ângulos de um triângulo, calcula e mostra a medida do terceiro ângulo.\n");
    
	printf("\nPrimeiro ângulo: ");
	scanf("%f", &angulo1);

	printf("Segundo ângulo: ");
	scanf("%f", &angulo2);

	angulo3 = 180 - (angulo1 + angulo2);
	printf("\nTerceiro ângulo: %.2f graus. \n\n", angulo3);

	return 0;
}
