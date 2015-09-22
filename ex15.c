#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 15
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*João recebeu seu salário e precisa pagar duas contas que estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João.*/

float salario, conta1, conta2; // declara as variáveis salario, conta1 e conta2
int main()
{
    printf("\nMostra quanto resta do salário depois de pagar duas contas com multa de 2%%. \n");
    
    printf("\nSalário: ");
    scanf("%f", &salario); // guarda o valor na variável salario
    
    printf("Valor da primeira conta: ");
    scanf("%f", &conta1); // guarda o valor na variável conta1
    
    printf("Valor da segunda conta: ");
    scanf("%f", &conta2); // guara o valor na variável conta2
    
	// calcula o valor da conta1 com 2% de multa e guarda na variável conta1
    conta1 = conta1 + conta1 * 2 / 100;
	// calcula o valor da conta2 com 2% de multa e guarda na variável conta2
    conta2 = conta2 + conta2 * 2 / 100; 

    printf("\nSalário:  R$ %.2f ", salario);// imprime o valor de salario
    printf("\nConta:     R$ %.2f ", conta1);// imprime o valor de conta1
    printf("\nConta:     R$ %.2f ", conta2);// imprime o valor de conta2
	// imprime o valor restante
    printf("\nRestante:  R$ %.2f \n\n", salario - conta1 - conta2);
    
    return 0;    
}
