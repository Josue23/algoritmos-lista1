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

int main()
{
	// declara as variáveis altura, anguloBase, anguloAltura, base, hipotenusa e coseno
	float altura, anguloBase, anguloAltura, base, hipotenusa;

    printf("\nRecebe a medida do ângulo formado por uma escada apoiada no chão e a distância que a escada está da parede.");
    printf("\nCalcula e mostra a medida da escada para que se possa alcançar a ponta da escada. \n");
    
	printf("\nÂngulo: ");
	scanf("%f", &anguloBase); // guarda o valor na variável angulo

	printf("Distância: ");
	scanf("%f", &base); // guarda o valor em base

    hipotenusa = base / cos(anguloBase);
	if (hipotenusa < 0) // valida se a hipotenusa é um valor positivo
	{
		hipotenusa = hipotenusa * (-1);
	}

	altura = sqrt(pow(hipotenusa, 2) - pow(base, 2)); // calcula a altura
	anguloAltura = 180 - (90 + anguloBase);

	printf("\nA medida da escada é %.2f \n", hipotenusa);
	printf("A altura da escada é %.2f\n", altura);
	printf("Os três ângulos do triângulo são: 90, %.2f e %.2f graus. \n\n", anguloBase, anguloAltura);

	return 0;
}
