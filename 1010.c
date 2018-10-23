#include <stdio.h>

int main (){
	int codigo1, codigo2, numero1, numero2;
	float valorpeca1, valorpeca2;

	printf ("Digite o código1, numero1, e o valor da peça1\n");
	scanf("%i %i %f", &codigo1, &numero1, &valorpeca1);

	printf ("Digite o código2, numero2 e o valor da peça2\n");
	scanf("%i %i %f", &codigo2, &numero2, &valorpeca2);

	printf("Valor à pagar: R$ %.2f\n", numero1*valorpeca1 + numero2*valorpeca2);
	return 0;
}
