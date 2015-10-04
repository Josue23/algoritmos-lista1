#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 19
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m², deve-se usar 18 W de potência. Faça um programa que receba as duas dimensôes de um cômodo (em metros), calcule e mostre a sua área (em m²) e a potência de iluminação que deverá ser utilizada. */

int main()
{
	// declara as variáveis lado1, lado2, area e potencia 
	float lado1, lado2, area, potencia;

    printf("\nCalcula e mostra a potência necessária para iluminar uma área. \n");
    
	printf("\nPrimeiro lado: ");
	scanf("%f", &lado1); // guarda o valor em lado1

	printf("Segundo lado: ");
	scanf("%f", &lado2); // guarda o valor em lado2

	area = lado1 * lado2; // calcula e guarda o valor em area
	potencia= area * 18; // calcula e guarda o valor em potencia

	printf("\nÁrea: %.2f m². ", area); // exibe o valor de area
	// exibe o valor de potencia
	printf("\nPotência: %.2f W \n\n", potencia);

	return 0;
}
