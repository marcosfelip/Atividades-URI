#include <stdio.h>

int main (){
	char nome[20];
	double salario, vendas;

	scanf("%s %lf %lf", nome, &salario, &vendas);

	printf ("Total = R$ %.2lf\n", salario + (vendas* 0.15));

	return 0;
}
