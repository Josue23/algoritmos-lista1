#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 25
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre:
 * 	a) a hora digitada convertida em minutos;
 * 	b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
 * 	c) o total dos minutos convertidos em segundos.*/
int main()
{
	int horas, minutos;

    printf("\nConverte horas em minutos e segundos. \n");
    
	printf("\nHora: ");
	scanf("%d", &horas);

	printf("Minutos: ");
	scanf("%d", &minutos);

	printf("\n%d horas = %d minutos. ", horas, horas * 60);
	printf("\nTotal dos minutos = %d ", minutos + horas * 60);
	printf("\nTotal de segundos = %d \n\n", (minutos + horas * 60) * 60);

	return 0;
}
