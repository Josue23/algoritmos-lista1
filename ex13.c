#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 13
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.*/

int numero, contador; // declara as variáveis numero e contador
int main()
{
    printf("\nCalcula e mostra a tabuada de um número. \n");
    
    printf("\nNúmero: ");
    scanf("%d", &numero); // guarda o valor na variável numero
    
	printf("\nTabuada de %d ", numero);
	
	// loop do tipo for para calcular e exibir os valores
    for (contador = 1; contador <= 10; contador++)
    {
        printf("\n%2d x %2d = %2d ", numero, contador, contador * numero);
    }
    printf("\n\n");

    return 0;
}
