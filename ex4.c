#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 4
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota, 
o cálculo pode ser conferido nesse site: http://www.gyplan.com/pt/weighted_mean_pt.html*/

// n1 é o número 1
// n2 é o número 2
float n1, n2; // declara as variáveis n1 e n2
int main()
{
    printf("\nRecebe duas notas, calcula e mostra a média ponderada dessas notas. ");
    printf("\nConsiderando peso 2 para a primeira nota e peso 3 para a segunda nota. \n");
    printf("\nDigite a primeira nota: ");
	scanf("%f", &n1); // guarda o valor em n1
		
	printf("Digite a segunda nota: ");
	scanf("%f", &n2); // guarda o valor em n2
	
	printf("\nA primeira nota tem peso igual a 2");
	printf("\nA segunda nota tem peso igual a 3");
	// calcula e exibe o resultado
	printf("\n\nA média ponderada de %.2f + %.2f = %.2f \n\n", n1, n2, (((n1*2) + (n2*3)) /5));

	return 0;
}
