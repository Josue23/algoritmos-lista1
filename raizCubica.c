#include <stdio.h>
#include <math.h>

int main()
{
	printf("\nCalcula a raiz cúbica de um número. \n");

	float numero, cubo;
	printf("Digite um número: ");
	scanf("%f", &numero);

	cubo = pow(numero, 1.0 / 3.0); // calcula a raiz cúbica
	
	printf("\nRaiz cúbica de %.2f = %.2f \n\n", numero, cubo);

	return 0;
}
