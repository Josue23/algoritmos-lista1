#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * exercício 17
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/* Faça um programa que receba o raio, calcule o mostre:
 	a) o comprimento de uma esfera, sabe-se que C = 2ΠR;
	b) a área de uma esfera, sabe-se que A = ΠR²;
	c) o volume de uma esfera, sabe-se que V = 3/4ΠR³; */

// declara as variáveisis pi, raio, comprimento, area e volume
float pi, raio, comprimento, area, volume;
int main()
{
    printf("\nRecebe o raio de uma esfera, calcula e exibe: ");
    printf("\nO comprimento, a área e o volume da esfera. \n");
    
	printf("\nRaio: ");
	scanf("%f", &raio); // guarda o valor na variável raio
	pi = 3,14159;

	// calcula o valor e guarda na variável comprimento
	comprimento = 2.0 * pi * raio;

	// OBS a fórmula para calcular a área de uma esfera é 4 * Π * raio² mas no exercício está Π * raio²
	area = pi * pow(raio, 2); // calcula o valor e guarda na variável area
	// calcula o valor e guarda na variável volume
	// OBS a fórmula de volume de esfera é 4 / 3 * Π * raio³ mas no exercício está 3 / 4 * Π * raio³
	volume = 3.0 / 4.0 * pi * pow(raio, 3);

	// exibe o valor de comprimento
	printf("\nComprimento: %.2f ", comprimento);
	printf("\nÁrea: %.2f ", area); // exibe o valor de area
	printf("\nVolume: %.2f \n\n", volume); // exibe o valor de volume

	return 0;
}
