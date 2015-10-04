#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 12
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse funcionário*/

int main()
{
	float salarioMinimo, salario, total;

    printf("\nCalcula e mostra a quantidade de salários mínimos que ganha um funcionário. \n");
    
    printf("Salário mínimo: ");
    scanf("%f", &salarioMinimo);
    
    printf("Salário: ");
    scanf("%f", &salario);
    
    total = salario / salarioMinimo;
    
    printf("\nO funcionário ganha %.2f salários mínimos. \n", total);
    
    return 0;
}

