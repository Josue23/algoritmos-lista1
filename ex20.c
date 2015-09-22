#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * exercício 20
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância que a escada está da parede. Calcule e mostre a medida da escada para que se possa alcançar a ponta da escada. */

// declara as variáveis angulo, base e hipotenusa e coseno
float angulo, base, hipotenusa;
double seno, coseno;
int main()
{
    printf("\nRecebe a medida do ângulo formado por uma escada apoiada no chão e a distância que a escada está da parede.");
    printf("\nCalcula e mostra a medida da escada para que se possa alcançar a ponta da escada. \n");
    
	printf("\nÂngulo: ");
	scanf("%f", &angulo); // guarda o valor na variável angulo

	printf("Distância: ");
	scanf("%f", &base); // guarda o valor em base

	seno = sin(angulo);
	printf("\nSeno de %.2f = %.2f", angulo, seno);

	coseno = cos(angulo);
	printf("\nCoseno de %.2f = %.2f\n", angulo, coseno);

	return 0;
}
