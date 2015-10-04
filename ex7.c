#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 7
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado;*/

int main()
{
	float peso, engordou, emagreceu; // declara as variáveis peso, engordou e emagreceu

    printf("\nRecebe o peso de uma pessoa e informa o novo peso se engordar 15%% ou emagrecer 20%%. \n");
    printf("\nPeso: ");
    scanf("%f", &peso); // guarda o valor em peso
   
	// soma 15% sobre o peso e guarda o valor na variável engordou
    engordou = peso + peso * 15 / 100;
	// subtrai 20% do peso e guarda o valor na variável emagreceu
    emagreceu = peso - peso * 20 / 100;
    
    printf("\nPeso inicial: %.2f quilos. ", peso);
    printf("\nSe engordar 15%%: %.2f quilos. ", engordou);
	printf("\nEngordou %.2f quilos. \n", engordou - peso);

    printf("\nSe emagrecer 20%%: %.2f quilos. ", emagreceu);
	printf("\nEmagreceu %.2f quilos. \n\n", peso - emagreceu );
       
    return 0;
}
