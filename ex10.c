#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 10
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que calcule e mostre a área de um quadrado.
Sabe-se que: A = lado * lado */

int main()
{
	float lado1, lado2, area; // declara as variáveis lado1, lado2 e area

    printf("\nCalcula e mostra a área de um quadrado. \n");
    
    printf("\nPrimeiro lado: ");
    scanf("%f", &lado1); // guarda o valor na variável lado1
    
    printf("Segundo lado: ");
    scanf("%f", &lado2); // guarda o valor na variável lado2
   
	// calcula lado1 * lado2 e guarda na variável area
    area = lado1 * lado2; // calcula lado1 * lado2 e guarda em area
    
	// exibe o valor da variável area
    printf("\nA área do quadrado é %.2f \n\n", area);
    
    return 0;    
}
