#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 5
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10% */

int main()
{
	float preco, novoPreco; // declara as variáveis preco e novoPreco

    printf("\nRecebe o preço de um produto, calcula e mostra o novo preço com desconto de 10%%. \n");
	printf("\nDigite o preco: ");
	scanf("%f", &preco); // guarda o valor em preco
	novoPreco = preco - preco * 10 / 100; // calcula e guarda o valor em novoPreco
	
	printf("\nPreço original do produto: RS %.2f ", preco);
	printf("\nPreço com desconto de 10%%: R$ %.2f \n\n", novoPreco);

	return 0;
}
