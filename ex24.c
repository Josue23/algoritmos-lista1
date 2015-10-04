#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 24
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Essa pessoa vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-se que a cotação do dólar é de R$ 1,80, do marco alemão é de R$ 2,00 e da libra esterlina é de R$ 1,57. O programa deve fazer as conversões e mostrá-las. */
int main()
{
	float real, dolar, marco, libra;

    printf("\nConversor de moedas. \n");
	printf("\nDolar = R$ 1,80 ");
	printf("\nMarco alemão = R$ 2,00 ");
	printf("\nLibra = R$ 1,57 \n");
    
	printf("\nDigite o valor em reais: ");
	scanf("%f", &real);

	printf("\nR$ %.2f equivale a: ", real);
	printf("\n%.2f dólares. ", real * 1.80);
	printf("\n%.2f marcos alemães. ", real * 2);
	printf("\n%.2f libras esterlinas. \n\n", real * 1.57);

	return 0;
}
