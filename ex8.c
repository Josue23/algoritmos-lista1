#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 8
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/

int main()
{
	float peso; // declara variavel peso, tipo float
	int gramas; // declara a variavel gramas, tipo int

    printf("\nRecebe o peso em quilos e mostra o peso em gramas. \n");
    printf("\nDigite seu peso: ");
    scanf("%f", &peso); // guarda o valor em peso
    gramas = peso * 1000; // gramas recebe o valor de peso * 1000
   
	// exibe o valor de peso e grama
    printf("\%.2f quilos equivale a %d gramas. \n\n", peso, gramas);
    
    return 0;
}
