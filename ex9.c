#include <stdio.h>
# include <stdlib.h>
/**
 * exercício 9
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura) /2 */

// declara as variáveis baseMenor, baseMaior, altura e area
float baseMenor, baseMaior, altura, area;
int main()
{
    printf("\nCalcula e mostra a área de um trapézio.\n");
    
    printf("\nDigite o valor da base menor: ");
    scanf("%f", &baseMenor); // guarda o valor em baseMenor
    
    printf("Digite o valor da base maior: ");
    scanf("%f", &baseMaior); // guarda o valor em baseMaior
    
    printf("Digite o valor da altura: ");
    scanf("%f", &altura); // guarda o valor em altura
    
	// calcula a área e guarda na variável area
    area = ((baseMaior + baseMenor) * altura) / 2;
	// exibe a área
    printf("\nA área do trapézio é: %.2f \n\n", area);

	/*
	printf(     "----------\n");
	printf(    "/"         "\\n");
	printf(   "/"           "\\n");
	printf(  "/"             "\\n");
	printf( "/"               "\\n");
	printf("---------------------\n\n");
	*/
    
    return 0;
}
