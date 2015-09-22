#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 21
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas. Calcule e mostre o salário a receber seguindo as regras a seguir:
 * 	a) a hora trabalhada vale 1/8 do salário mínimo;
 * 	b) a hora extra vale 1/4 do salário mínimo;
 * 	c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
 * 	d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
 * 	e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras. */

float qtdHoras, horasExtras, salarioMinimo, salarioBruto, total;
int main()
{
    printf("\nRecebe o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas.");
    printf("\nCalcula e mostra o salário a receber. \n");
    
	printf("\nQtde de horas: ");
	scanf("%f", &qtdHoras);

	printf("Qtde de horas extras: ");
	scanf("%f", &horasExtras);

	printf("Valor do salário mínimo: ");
	scanf("%f", &salarioMinimo);

	salarioBruto = qtdHoras * (salarioMinimo / 8);
	qtdHoras = qtdHoras * (salarioMinimo / 8);
	horasExtras = horasExtras * (salarioMinimo / 4);
	total = salarioBruto + horasExtras;
	
	printf("\nSalário a receber: %.2f\n\n", total);

}
