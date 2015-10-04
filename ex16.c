#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * exercício 16
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa. */

int main()
{
	// declara as variáveis cateto1, cateto2 e hipotenusa
	float cateto1, cateto2, hipotenusa;

    printf("\nRecebe o valor dos catetos de um triângulo, calcula e mostra o valor da hipotenusa. \n");
    
    printf("\nPrimeiro cateto: ");
    scanf("%f", &cateto1); // guarda o valor em cateto1
    
    printf("Segundo cateto: ");
    scanf("%f", &cateto2); // guarda o valor em cateto2
   
	// calcula o valor da hipotenusa
    hipotenusa = cateto1 * cateto1 + cateto2 * cateto2;
    
	// imprime o valor da hipotenusa
    printf("\nHipotenusa: %.2f \n\n", sqrt(hipotenusa));
    
    return 0;
}
