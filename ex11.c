#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 11
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que calcule e mostre a área de um losango. 
Sabe-se que: A = (diagonal maior * diagonal menor) /2 */

// declara as variáveis diagonalMenor, diagonalMaior e area.
float diagonalMenor, diagonalMaior, area;
int main()
{
    printf("\nCalcula e mostra a área de um losango. \n");
    
    printf("\nDiagonal menor: ");
    scanf("%f", &diagonalMenor); // guarda o valor em diagonalMenor
    
    printf("Diagonal maior: ");
    scanf("%f", &diagonalMaior); // guarda o valor em diagonalMaior
    
	// calcula a área e guarda na variável area
    area = diagonalMaior* diagonalMenor / 2;
    
	// exibe o valor da área
    printf("\nA área do losango é : %.2f \n\n", area);
    
    return 0;
}
