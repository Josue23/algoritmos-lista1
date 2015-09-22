#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 6
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do funcionário.*/

float salario, vendas, total; // declara as variáveis salario, vendas e total
int main()
{
    printf("\nInforma o salário e a comissão. \n");
    printf("\nSalário: ");
    scanf("%f", &salario); // guarda o valor em salario
    
    printf("Vendas: ");
    scanf("%f", &vendas); // guarda o valor em vendas
    
	// soma o salário e os 4% de comissão sobre as vendas
    total = salario + vendas * 4/100;
    
    printf("\nValor da comissão: R$ %.2f ", vendas * 4 / 100);
    printf("\nO salário final do funcionário é: R$ %.2f \n\n", total);
    
    return 0;
}
