#include <stdio.h>
#include <stdlib.h>
/**
 * exercício 14
 * Josué C. Rodrigues
 * RA 1520411
 * josuerodrigues@gmail.com
 */
/*faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    a) a idadee dessa pessoa em anos;
    b) a idade dessa pessoa em meses;
    c) a idade dessa pessoa em dias;
    d) a idade dessa pessoa em semanas.*/

int main()
{
	// declara as variáveis anoNascimento, anoAtual, anos, meses, dias e semanas
	int anoNascimento, anoAtual, anos, meses, dias, semanas;

    printf("\nMostra a idade em anos, meses, dias e semanas. \n");
    
    printf("\nAno de nascimento: ");
    scanf("%d", &anoNascimento); // guarda o valor na variável anoNascimento

	printf("Ano atual: " );
	scanf("%d", &anoAtual);
    
    anos = anoAtual - anoNascimento; //calcula o valor e guarda na variável anos
    meses = (anoAtual - anoNascimento) * 12; // calcula o valor e guarda na variável meses
    dias = (anoAtual - anoNascimento) * 365; // calcula o valor e guarda na variável dias
    semanas = (anoAtual - anoNascimento) * 52; // calcula o valor e guarda na variável semanas
    
    printf("\n%d anos. ", anos); // exibe o valor de anos
    printf("\n%d meses. ", meses); // exibe o valor de meses
    printf("\n%d dias. ", dias); // exibe o valor de dias
    printf("\n%d semanas. \n\n", semanas); // exibe o valor de semanas
    
    return 0;
}
