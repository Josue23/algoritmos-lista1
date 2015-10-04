#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 18
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*Faça um programa que receba uma temperatura em Calsius, calcule e mostre essa temperatura em Fahrenheit.
Sabe-se que F = 180(C + 32) / 100 */

int main()
{
	float celsius, fahrenheit; // declara as variáveis celsius e fahrenheit

    printf("\nConverte temperatura em Calsius em Fahrenheit. \n");
    
	printf("\nCelsius: ");
	scanf("%f", &celsius); // guarda o valor em celsius

	// calcula e guarda o valor em fahrenheit
	fahrenheit = 9.0 / 5.0 * celsius + 32;

	// exibe o valor de fahrenheit
	printf("\n%.2fºC = %.2f Fahrenheit \n\n", celsius, fahrenheit);

	return 0;
}
